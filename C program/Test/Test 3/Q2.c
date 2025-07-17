#include<stdio.h>

void main()
{
	int start,end,sum=0;
	
	printf("Enter the start of range : ");
	scanf("%d",&start);
	
	printf("Enter the end of range : ");
	scanf("%d",&end);
	
	for(int i=start; i<=end; i+=2)
	{
	sum=sum+i;
	}
		
	printf("sum of alternatane numbers from %d to %d is %d \n ",start, end, sum);
}