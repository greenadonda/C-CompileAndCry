#include <stdio.h>

int main() {
    int row, column;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &column);

    int a[row][column];

    printf("Enter elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int max = a[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("\n\nLargest element in the array = %d\n", max);
}
