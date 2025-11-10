#include <stdio.h>
int main()
{
    int marks;
    char grade;

    printf("Enter your marks:\n");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        grade = 'A';
        
    }
    else if (marks >= 75 && marks <= 89)
    {
        grade = 'B';
    }
    else if (marks >= 50 && marks <= 74)
    {
        grade = 'C';
    }
    else
    {
        printf("Fail");
        return 0;
    }
    printf("You got %c grade", grade);

    return 0;
}