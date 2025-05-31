#include <stdio.h>

int main()
{
    char str[50], ch;
    int freq = 0;

    printf("Enter your string:\t");
    scanf("%[^\n]", str); 
    printf("\n\n");
    printf("Enter the character to find frequency:\t");
    scanf(" %c", &ch); 

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            freq++;
    }

    printf("Frequency of %c = %d\n", ch, freq);
}
