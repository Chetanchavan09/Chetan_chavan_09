#include <stdio.h>

void main() 
{
    int ages[5], i;
    float ticketAmount, total = 0, price;

    printf("Enter ticket amount: ");
    scanf("%f", &ticketAmount);

    printf("Enter ages of 5 people:\n");
    for(i = 0; i < 5; i++) 
	{
        printf("Person %d age: ", i + 1);
        scanf("%d", &ages[i]);

        if(ages[i] < 12)
            price = ticketAmount * 0.7;   
        else if(ages[i] > 59)
            price = ticketAmount * 0.5;   
        else
            price = ticketAmount;         

        total += price;
    }

    printf("\nTotal ticket cost for all: %.2f\n", total);


}
