#include<stdio.h>

void main()
{
    int n=153;
    int original=n;
    int sum=0;

    while(n>0) 
	{
        int digit=n%10;
        sum+=digit*digit*digit;
        n/=10;
    }

    if(sum==original)
	{
        printf("Armstrong \n");
    } 
	else 
	{
        printf("Not Armstrong \n");
    }
}
