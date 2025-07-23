#include<stdio.h>

int main()
{
    int n=5;

    for(int i=n; i>=1;i--)
	{
        for(int space=0; space<2-4; space++)
        printf(" ");
        
        for(int star=1; star<=i; star++)
		printf("*");
		
        printf("\n");
	}
}
