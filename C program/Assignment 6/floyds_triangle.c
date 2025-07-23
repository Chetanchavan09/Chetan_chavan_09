#include<stdio.h>

void main()
{
    int n,num=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    
    for(int row=1; row<=n; row++)
	{
        for(int col=1; col<=row; col++)
		{
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}
