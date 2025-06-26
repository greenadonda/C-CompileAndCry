#include <stdio.h>

int divisible(int num) 
{
    return (num % 3 == 0 && num % 5 == 0);
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (divisible(num))
        printf("%d is divisible by both 3 and 5.\n", num);
    else
        printf("%d is not divisible by both 3 and 5.\n", num);

    return 0;
}
