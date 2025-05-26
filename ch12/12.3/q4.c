#include <stdio.h>

int main() {
    int row, column, sum = 0;

    printf("Enter row & column: ");
    scanf("%d %d", &row, &column);

    int a[row][column];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nBoundary elements of the matrix:\n");

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (i == 0 || i == row - 1 || j == 0 || j == column - 1) {
                printf("%d\t", a[i][j]);
                sum += a[i][j];  
            } else {
                printf(" \t");  
            }
        }
        printf("\n");
    }

    printf("\nSum of boundary elements = %d\n", sum);
}
