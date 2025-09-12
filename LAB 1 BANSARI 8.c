#include <stdio.h>

int main() {
    float dollars, rupees;

    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    rupees = dollars * 48;   // conversion rate

    printf("%.2f $ = %.2f Rs\n", dollars, rupees);

    return 0;
}

