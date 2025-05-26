#include<stdio.h>

int main() {
    int r, c, sum = 0;
   
    
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c],b[r][c],a_c[r][c];
    printf("array a: ");
    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            
        }
    }
        printf("array b: ");

    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
           
        }
    }
        printf("array c: ");

    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++) 
        {
            a_c[i][j]=a[i][j]+b[i][j];
            printf("%d",a_c[i][j]);
        }
    }
    printf("Resultant array (sum):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", a_c[i][j]);
        }
        printf("\n");
    }

}
