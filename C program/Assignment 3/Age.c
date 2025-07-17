#include<stdio.h>
void main() 
{
int age;

    printf("Enter your age:");
    scanf("%d",&age);

    if(age<0)
	{
        printf("Invalid age entered\n");
    }
	else if(age<12)
	{
        printf("Child\n");
    }
	else if(age>=12 && age<=19)
	{
        printf("Teenager\n");
    }
	else if(age>=20 && age<=59)
	{
        printf("Adult\n");
    } 
	else
	{
        printf("Senior\n");
}
}
