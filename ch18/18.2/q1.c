#include <stdio.h>

int main() {
    int size, i;
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];
    int *p = arr;         
    int **pp = &p;        

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", (*pp + i));
    }

    printf("Reversed array elements:\n");
    for (i = size - 1; i >= 0; i--) {
        int val = *(*pp + i);
        printf("%d ", val * val);
    }
}
