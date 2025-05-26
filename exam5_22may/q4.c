#include <stdio.h>

int main() {
    int r, c,rowsum=0,colsum=0;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nSum of each row:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) 
        {
            rowsum += a[i][j];
        }
        printf("Row %d sum = %d\n", i, rowsum);
    }
    printf("\nSum of each column:\n");
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) 
        {
           colsum += a[i][j];
        }
        printf("Column %d sum = %d\n", j, colsum);
    }

}
