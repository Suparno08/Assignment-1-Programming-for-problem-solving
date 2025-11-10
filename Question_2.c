#include <stdio.h>
void swap(int *a, int *b);
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    temp = *b;
}
int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("Before swaping a = %d and b = %d", a, b);
    swap(&a, &b);
    printf("\nAfter swaping a is %d and b is %d", a, b);

    return 0;
}