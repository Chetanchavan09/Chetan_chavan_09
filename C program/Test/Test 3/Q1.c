#include<stdio.h>

void main()
{
	int i;
	printf("Even : ");
	for(i=10; i<=25; i++)
	if(i%2!=0)
	printf("%d ",i);
	
	printf("\nodd : ");
	for(i=1; i<=15; i++)
	if(i%2==0)
	printf("%d ",i);
	
    
}