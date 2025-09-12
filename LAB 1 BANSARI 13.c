#include <stdio.h>

int main() {
    float bytes, KB, MB, GB;

    printf("Enter size in Bytes: ");
    scanf("%f", &bytes);

    KB = bytes / 1024;
    MB = bytes / (1024 * 1024);
    GB = bytes / (1024 * 1024 * 1024);

    printf("In Kilobytes = %.2f KB\n", KB);
    printf("In Megabytes = %.2f MB\n", MB);
    printf("In Gigabytes = %.2f GB\n", GB);

    return 0;
}
