#include <stdio.h>

void main()
 {
    int minutes, hours, remaining_minutes;

    printf("Enter total minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    printf("%d minutes = %d hour(s) and %d minute(s)\n", minutes, hours, remaining_minutes);

    return 0;
}
