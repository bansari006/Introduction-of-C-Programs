#include <stdio.h>

int main() {
    float kg, grams;

    printf("Enter weight in Kilograms: ");
    scanf("%f", &kg);

    grams = kg * 1000;

    printf("Equivalent in Grams = %.2f\n", grams);

    return 0;
}
