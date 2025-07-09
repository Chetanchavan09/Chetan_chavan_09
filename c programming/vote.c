#include<stdio.h>

void main()
 {
 	int age;
 	
 		printf("Enter the number:  ");
 		scanf("%d" ,&age);
 	
 	if(age>=18)
	 {
	 	printf("eligible for vote \n ");
	 }
	else
	 {
	 	printf("Not eligible for vote \n");	
	 } 
	 return 0;
 }