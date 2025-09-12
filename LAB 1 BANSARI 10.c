#include <stdio.h>

int main() {
    float dollar, pound;

    printf("Enter amount in Dollars: ");
    scanf("%f", &dollar);

    // 1$ = 48 Rs, 1£ = 70 Rs → 1$ = (48/70) £
    pound = (dollar * 48) / 70;

    printf("Equivalent in Pounds = %.2f\n", pound);

    return 0;
}

