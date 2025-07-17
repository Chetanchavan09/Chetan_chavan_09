#include <stdio.h>

void main()
{
    int num,reversed,hundreds,tens,units;

         printf("Enter a 3-digit number: ");
         scanf("%d",&num);
   
    if(num<100 || num>999)
    {
         printf("Invalid input. Please enter a 3-digit number \n");
        
    return 1;
    }
         hundreds=num/100;
         tens=(num/10)%10;
         units=num%10;
    
         reversed=units*100+tens*10+hundreds;
    
    if (num==reversed)
	{
         printf("%d is a palindrome \n",num);
    } 
	else
	{
         printf("%d is not a palindrome \n",num);
    }
}
