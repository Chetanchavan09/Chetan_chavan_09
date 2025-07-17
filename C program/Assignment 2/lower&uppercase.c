#include<stdio.h>

void main()
{
	char ch;
	
		printf("Enter the alphabet character: ");
		scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("%c is an uppercase letter \n ",ch);	
	}
	else if(ch>='a' && ch<='z')
	{
		printf("%c is an lowercase letter \n ",ch);
	}
	else
	{
		printf("Invalid inpute. please inter alphabet letter \n");
	}
}