#include <stdio.h>

int main() 
{
    int num;

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            printf("  ");
        }
        num = 10 - i;
        for (int j = i; j < 5; j++) 
        {
            printf("%d ", num);
            num--;
        }

        printf("\n");
    }
}
