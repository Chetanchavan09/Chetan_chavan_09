#include<stdio.h>
#include<conio.h>

void main()
{
	int num[5];
	int sum = 0;
	float average;
	
	printf("Enter the five no:\n");
	
	for (int i = 0; i < 5; i++)
	{	
	
	printf("Number %d: ", i + 1);
	scanf("%d", &num[i]);

	sum +=num[i];
	}
	
	average = sum/5.0;
	
	printf("the no of avg is %.2f \n",average);
	
	return 0;
	
	
}