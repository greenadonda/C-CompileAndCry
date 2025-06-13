#include <stdio.h>

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size][size];
    int *ptr;
    int i, j;
    
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) 
    {
        for (j = 0; j < size; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Cubes of all elements:\n");

    ptr = &arr[0][0];  

    for (i = 0; i < size * size; i++) 
    {
        int value = *(ptr + i);
        printf("%d ", value * value * value);

        if ((i + 1) % size == 0) 
        {
            printf("\n");
        }
    }

    
}
