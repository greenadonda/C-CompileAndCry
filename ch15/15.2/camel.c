#include <stdio.h>

int main() {
    char a[50];

    printf("Enter your string: ");
    scanf(" %[^\n]", a);  

    for (int i = 0; a[i] != '\0'; i++) 
    {
        if (a[i] == ' ')
        {  
            for (int left = i; a[left] != '\0'; left++) {
                a[left] = a[left + 1];
            }

            if (a[i] >= 'a' && a[i] <= 'z') {
                a[i] -= 32;
            }

            i--; 
        }
    }
    int i;
    if (a[i] >= 'A' && a[i] <= 'Z') {
        a[i] += 32;
    }

    printf("Camel Case: %s\n", a);

}
