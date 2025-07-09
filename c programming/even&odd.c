#include<stdio.h>

void main()
{
	int number;
	 
        printf("Enter the value : ");
        scanf("%d",&number);
        
    if (number % 2 == 0)
    {
    	printf("%d is even number \n",number);
	}
	
	else
	{
		printf("%d is odd number \n",number);
	}
	return 0;
}