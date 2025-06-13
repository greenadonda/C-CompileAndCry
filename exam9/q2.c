#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    int chem, maths, phy;
    float per;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Chemistry Marks: ");
        scanf("%d", &s[i].chem);
        printf("Maths Marks: ");
        scanf("%d", &s[i].maths);
        printf("Physics Marks: ");
        scanf("%d", &s[i].phy);

        s[i].per = (s[i].chem + s[i].maths + s[i].phy) / 3.0;
    }
    printf("\n--- Student Marksheet ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Roll: %d | Name: %s | Percentage: %.2f%%\n", s[i].roll, s[i].name, s[i].per);
    }
}
