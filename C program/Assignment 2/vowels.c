#include <stdio.h>
void main() 
{
    char ch;

    printf("Enter an alphabet character: ");
    scanf(" %c", &ch);  
   
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
        
    char lower = tolower(ch);
    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') 
	{
        printf("%c is a vowel \n",ch);
    }
    else 
	{
        printf("%c is a consonant \n",ch);
    }
    }
	 else 
	{
        printf("Invalid input. Please enter an alphabet character \n");
    }

    return 0;
}
