#include <stdio.h>

int main() {
    int arr[2][2], i, j, sum = 0;

    printf("Enter elements of 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
          sum = sum + arr[i][j];
        }
    }

    printf("Sum of elements = %d", sum);

    return 0;
}