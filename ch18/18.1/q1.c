#include <stdio.h>

int main() {
    int size, i;
    printf("Enter the array's size: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;
    
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Square of each element:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }
}
