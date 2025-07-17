#include<stdio.h>

void main()
{
    int n=121;
    int original=n;
    int reversed=0;

    while(n>0)
	{
        int digit=n%10;
        reversed=reversed*10+digit;
        n/=10;
    }
    if(original == reversed)
	{
        printf("Palindrome \n");
    }
	else
	{
        printf("Not Palindrome\n");
    }
}
