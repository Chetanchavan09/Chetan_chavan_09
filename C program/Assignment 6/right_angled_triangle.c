#include<stdio.h>

void main()
{
	int n=7;
	int i,j;
	
	for(i=1; i<=n; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}