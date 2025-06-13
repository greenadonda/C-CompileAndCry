#include<stdio.h>

int main()
{
    char a[50];

    printf("enter your name:\t");
    //scanf("%s",&a);    not print anything after the space  ex. greena donda    OUTPUT: greena     ------but if you want to print everything after the space use this scanf(%["^\n"])
    scanf("%[^\n]",&a);

    printf("\n\n");
    printf("Name:\t%s",a);
}