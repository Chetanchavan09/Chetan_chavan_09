#include<stdio.h>

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num>0)
	{
        printf("%d is Positive.\n",num);
    }
	else if(num<0)
	{
        printf("%d is Negative.\n",num);
    }
	else
	{
        printf("The number is Neutral (Zero)\n");
    }
}
