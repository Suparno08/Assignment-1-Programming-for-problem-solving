#include <stdio.h>
int main()
{
    int n, rem = 1, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        sum = sum + rem;
    }
    printf("Sum is %d",sum);

    return 0;
}