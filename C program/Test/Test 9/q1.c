#include <stdio.h>
#include <string.h>

void main() 
{
    char str[100];
    int i, j, k;
    int len;

    printf("Enter the string: ");
    scanf("%s", str);  

    len = strlen(str);

    for(i = 0; i < len; i++) 
	{
        for(j = i + 1; j < len; ) 
		{
            if(str[i] == str[j]) 
			{
                
                for(k = j; k < len; k++) 
				{
                    str[k] = str[k + 1];
                }
                len--; 
            } 
			else 
			{
                j++;
            }
        }
    }

    printf("After removing duplicates: %s\n", str);
}
