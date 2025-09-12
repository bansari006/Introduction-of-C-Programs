#include <stdio.h>

int main() {
    int hours, minutes;

    // Input hours
    printf("Enter hours: ");
    scanf("%d", &hours);

    // Convert hours to minutes
    minutes = hours * 60;

    // Output
    printf("%d hours = %d minutes\n", hours, minutes);

    return 0;
}

