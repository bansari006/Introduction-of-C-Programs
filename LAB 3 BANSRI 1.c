#include <stdio.h>
int main() {
    int arr[5], i;

    // Input 5 values
    printf("Enter 5 numbers:\n");
    for(i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    // Print values
    printf("You entered:\n");
    for(i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
