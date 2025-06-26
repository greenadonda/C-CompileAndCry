#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str); 

    for (i = 0; str[i]; i++)
    {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
        {
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') 
                
            {
                count++;
            }
        }
    }

    printf("Consonants: %d\n", count);
}
