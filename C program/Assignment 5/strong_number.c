#include<stdio.h>

int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
	{
        fact*=i;
    }
    return fact;
}
int isStrong(int num)
{
    int original=num;
    int sum=0;

    while(num>0)
	{
        int digit=num%10;
        sum+=factorial(digit);
        num/=10;
    }
    return sum==original;
}
int main()
{
    int n;
    printf("Enter the upper limit (n): ");
    scanf("%d",&n);
    printf("Strong numbers between 1 and %d are:\n",n);
    for(int i=1;i<=n;i++)
	{
        if(isStrong(i))
		{
            printf("%d\n",i);
        }
    }
    return 0;
}
