#include<stdio.h>

void main() 
{
    float price,discount=0,final_price;
    char isStudent;

    printf("Enter the purchase amount: ");
    scanf("%f",&price);

    printf("Are you a student? (y/n): ");
    scanf(" %c",&isStudent); 
  
    if(isStudent=='y' || isStudent=='Y') 
	{
    if(price>500) 
	{
        discount=0.20*price;
    }
	else 
	{
        discount=0.10*price;
    }
    } 
	else if(isStudent=='n' || isStudent=='N') 
	{
    if(price>600) 
	{
        discount=0.15*price;
    } 
	else 
	{
        discount=0;
    }
    } 
	else 
	{
        printf("Invalid input for student status \n");
        return 1;
    }
    final_price=price-discount;
    printf("Discount: %.2f\n", discount);
    printf("Final price after discount: %.2f \n",final_price);
}
