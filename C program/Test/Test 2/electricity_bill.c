#include<stdio.h>

void main()
{
    int units;
    int bill=0;

    printf("Enter the number of units consumed: ");
    scanf("%d",&units);

    if(units<=50)
	{
        bill=units*30;
    }
	else if(units<=150)
	{
        bill=50*30+(units-50)*40;
    }
	else
	{
        bill=50*30+100*40+(units-150)*50;
    }
    printf("Electricity Bill = %d Rs\n",bill);
}
