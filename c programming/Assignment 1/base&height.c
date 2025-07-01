#include<stdio.h>

void main()

{
	
	float base , height , area;
	
	
	printf("Enter the base : ");
	scanf("%f",& base);
	
	
	printf("Enter the height : ");
	scanf("%f",& height);
	
	
	area = ( base * height) / 2;
	
	
	printf("area of triangle = %.2f square units \n",area);
	
	
	return 0;
}