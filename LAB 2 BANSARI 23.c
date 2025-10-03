#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1;   // special case
    } else {
        while (num != 0) {
            count++;
            num = num / 10;
        }
    }

    printf("Total digits = %d", count);

    return 0;
}
