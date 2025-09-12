#include <stdio.h>

int main() {
    float rupees, dollars;

    printf("Enter amount in Rupees: ");
    scanf("%f", &rupees);

    dollars = rupees / 48;   // conversion rate

    printf("%.2f Rs = %.2f $\n", rupees, dollars);

    return 0;
}
