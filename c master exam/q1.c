#include <stdio.h>

int main() 
{
    int n;
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    int last = n % 10;
    int first = n / 100;

    printf("Sum = %d\n", first + last);
   
}
