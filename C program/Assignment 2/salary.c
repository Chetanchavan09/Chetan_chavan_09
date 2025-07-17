#include <stdio.h>

void main() 
{
    float basic,da,ta,hra,total;
    
    	printf("Enter basic salary: ");
    	scanf("%f",&basic);

    if (basic<=5000)
	{
        da=0.10 * basic;
        ta=0.20 * basic;
        hra=0.25 * basic;
    } else
	{
        da=0.15 * basic;
        ta=0.25 * basic;
        hra=0.30 * basic;
    }
    total=basic+da+ta+hra;

    printf("\nBasic Salary = %.2f",basic);
    printf("\nDA = %.2f",da);
    printf("\nTA = %.2f",ta);
    printf("\nHRA = %.2f",hra);
    printf("\nTotal Salary = %.2f\n",total);
}
