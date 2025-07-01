#include<stdio.h>

void main()

{
	int a,b,temp;
	
	printf("Enter the first no (a):");
	scanf("%d",& a );
	
	printf("Enter the second no (b):");
	scanf("%d",& b);
	
	printf("\n before swapping :");
	printf("a = %d , b = %d\n",a,b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("\n after swapping :");
	printf("a = %d , b = %d\n",a,b);
	
	return 0;
	
}