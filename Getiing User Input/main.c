#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s asdf", name);

    return 0;

    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("You are %d years old", age);

    return 0;

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f", gpa);

    return 0;

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c", grade);

    return 0;
}
