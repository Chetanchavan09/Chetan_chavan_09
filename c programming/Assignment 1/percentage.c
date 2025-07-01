#include<stdio.h>

void main()

{
   	float  sub1, sub2, sub3, sub4, sub5;
   	float  total, percentage;
	
    
     printf("Enter the sub no 1 : ");
     scanf("%f",&sub1);
	 
	 
	  printf("Enter the sub no 2 : ");
    scanf("%f",&sub2);
    
    
     printf("Enter the sub no 3 : ");
    scanf("%f",&sub3);
    
    
     printf("Enter the sub no 4 : ");
    scanf("%f",&sub4);
    
    
     printf("Enter the sub no 5 : ");
     scanf("%f",&sub5);
    

     total = sub1 + sub2 + sub3 + sub4 + sub5;
     percentage = (total / 500) * 100;
     
     
     printf("Total of marks is %.2f \n",total);
     printf("total of percentage is %.2f \n ",percentage);
     
     return 0;


}