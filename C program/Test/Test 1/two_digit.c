#include<stdio.h>

void main()
{
    int number,lastTwoDigits;

    printf("Enter a number: ");
    scanf("%d",&number);

    lastTwoDigits=number%100;
	printf("Last two digits: %02d\n",lastTwoDigits);
}