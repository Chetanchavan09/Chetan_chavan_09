#include<stdio.h>

void main()
{
    int n=28;
    int sum=0;

    for(int i=1;i<n;i++)
	{
        if(n%i==0)
		{
            sum+=	i;
        }
    }
    if(sum == n) 
	{
        printf("Perfect \n");
    }
	else
	{
         printf("Not Perfect \n");
    }
}
