#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float average = sum / n;
    printf("Average: %.2f\n", average);

    return 0;
}
