#include <stdio.h>

int main() {
    int a, b, sum, remainder;
    
    printf("Enter the value of A: ");
    scanf("%d", &a);
    
    printf("Enter the value of B: ");
    scanf("%d", &b);
    
    sum = a + b;
    printf("The sum is: %d", sum);
    
    remainder = a % b;
    printf("\nThe remainder is: %d", remainder);
    
    return 0;
}

