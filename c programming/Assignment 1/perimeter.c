#include<stdio.h>

void main()

{
	
	float lenght, width, perimeter;
	
	
	printf("Enter the lenght :");
	scanf("%f", & lenght);
	
	
	printf("Enter the width :");
	scanf("%f", & width);
	
	
	perimeter = 2 * (lenght + width);
	  
	  
	printf("perimeter of the rectangle %.2f \n ",perimeter);
	
	
	return 0;
}