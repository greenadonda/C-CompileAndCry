#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int length;

    printf("Enter any string: ");
    scanf(" %[^\n]", str); 

    ptr = str;
    length = 0;

    for (ptr = str; *ptr != '\0'; ptr = ptr + 1) {
        length = length + 1;
    }

    printf("The length of the string is: %d\n", length);
    return 0;
}
