#include <stdio.h>

void sumPosNeg(int arr[], int n) {
    int posSum = 0, negSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            posSum += arr[i];
        else if (arr[i] < 0)
            negSum += arr[i];
    }

    printf("Sum of positive numbers: %d\n", posSum);
    printf("Sum of negative numbers: %d\n", negSum);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers (can be positive or negative):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sumPosNeg(arr, n);

    return 0;
}
