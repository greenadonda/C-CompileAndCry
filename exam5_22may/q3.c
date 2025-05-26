#include <stdio.h>

int main() {
    int r, c;

    printf("Enter size of row and column: ");
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int trans[c][r];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            trans[j][i] = a[i][j];
        }
    }

    printf("\nTranspose matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

}
