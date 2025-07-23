#include<stdio.h>

int isPerfect(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
	{
    if (num%i==0)
            sum+=i;
    }
    return sum==num;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Perfect numbers from 1 to %d:\n",n);
    for (int i=1;i<=n;i++)
	{
        if (isPerfect(i))
            printf("%d ",i);
    }
    return 0;
}
