//Stronge Num Range with function Type 3
#include <stdio.h>
void getStrongeRange(int);//declartion
void main()
{
	
	int n;
	printf("Enter the range: ");
	scanf("%d",&n);
	
	getStrongeRange(n);//call
}

void getStrongeRange(int n)
{
	int i,j,num,rem,fact,sum;
	
	
	for(i=1;i<=n;i++)
	{
		num=i;
		sum=0;
		while(num>0)
		{
			rem=num%10;
			fact=1;
			for(j=1;j<=rem;j++)
			{
				fact=fact*j;
			}
			 sum=sum+fact;
			 num=num/10;
		}
		if(sum==i)
		{
			printf("%d is an stronge num\n",i);
		}
	}
}