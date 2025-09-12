
#include <stdio.h>

int main() {
    float num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform operations
    printf("\nResults:\n");
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

    // Check division
    if (num2 != 0) {
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("Division: Error! Division by zero not allowed.\n");
    }

    return 0;
}
