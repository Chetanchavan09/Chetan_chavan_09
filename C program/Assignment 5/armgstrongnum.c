#include<stdio.h>

int countDigits(int num)
{
    int count=0;
    while (num!=0)
	{
        count++;
        num/=10;
    }
    return count;
}
int isArmstrong(int num)
{
    int digits=countDigits(num);
    int sum=0;
    int temp=num;

    while(temp>0)
	{
        int digit=temp%10;
        sum+=pow(digit,digits);
        temp/=10;
    }
    return (sum==num);
}
int main()
{
    int n;
    printf("Enter the upper limit: ");
    scanf("%d",&n);
    printf("Armstrong numbers between 1 and %d are:\n",n);

    for(int i=1;i<=n;i++)
	{
        if(isArmstrong(i))
		{
            printf("%d ",i);
        }
    }
    printf("\n");

    return 0;
}
