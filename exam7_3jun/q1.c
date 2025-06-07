#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int divi(int, int);
int mod(int, int);

int add(int a, int b) 
{ 
    return a + b; 
    
}
int sub(int a, int b) 
{
    return a - b; 
    
}
int mul(int a, int b) 
{ 
    return a * b; 
    
}
int divi(int a, int b) 
{
    return a / b; 
    
}
int mod(int a, int b) 
{
    return a % b;
}

int main() {
    int choice, num1, num2;

menu:
    
    printf("\n\n");
    printf("Press 1 for +\n");
    printf("Press 2 for -\n");
    printf("Press 3 for *\n");
    printf("Press 4 for /\n");
    printf("Press 5 for %\n");
    printf("Press 0 to exit\n");
    
    printf("\n\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n\n");

    if (choice == 0) {
        printf("Exiting program..\n");
        return 0;
    }

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\n\n");

    switch (choice) {
        case 1:
            printf("Result = %d\n", add(num1, num2));
            break;
        case 2:
            printf("Result = %d\n", sub(num1, num2));
            break;
        case 3:
            printf("Result = %d\n", mul(num1, num2));
            break;
        case 4:
            if (num2 == 0)
                printf("Error: Division by zero\n");
            else
                printf("Result = %d\n", divi(num1, num2));
            break;
        case 5:
            if (num2 == 0)
                printf("Error: Modulo by zero\n");
            else
                printf("Result = %d\n", mod(num1, num2));
            break;
        default:
            printf("Invalid choice. Try again.\n");
    }

    goto menu;
}
