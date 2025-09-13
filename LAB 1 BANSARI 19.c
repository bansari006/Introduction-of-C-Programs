#include <stdio.h>

int main() {
    float R, A;
    printf("Enter radius of circle: ");
    scanf("%f", &R);
    A = (22.0/7.0) * R * R;
    printf("Area of Circle = %.2f\n", A);
    return 0;
}
