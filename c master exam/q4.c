#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of arrays: ");
    scanf("%d", &size);
    
    int a[size], b[size], sum[size];
    int *p1 = a, *p2 = b, *p3 = sum;

    printf("Enter values for array a:\n");
    for (int i = 0; i < size; i++) 
    scanf("%d", &p1[i]);

    printf("Enter values for array b:\n");
    for (int i = 0; i < size; i++) 
    scanf("%d", &p2[i]);

    for (int i = 0; i < size; i++) 
    p3[i] = p1[i] + p2[i];

    printf("Sum: ");
    for (int i = 0; i < size; i++) 
    printf("%d ", p3[i]);

}
