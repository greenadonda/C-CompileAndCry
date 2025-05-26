#include<stdio.h>

int main() {
    int r, c, sum = 0;
    float avg;
    
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    avg = (float)sum / (r * c);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
}
