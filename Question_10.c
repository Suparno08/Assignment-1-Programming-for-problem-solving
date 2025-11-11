#include <stdio.h>
int main() {
    double num1 = 0, num2 = 0, *ptr1 = &num1, *ptr2 = &num2;
    int choice;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Enter two numbers\n");
        printf("2. Add using pointers\n");
        printf("3. Multiply using pointers\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter first number: ");
                scanf("%lf", ptr1);
                printf("Enter second number: ");
                scanf("%lf", ptr2);
                break;

            case 2:
                printf("Sum = %.2lf\n", (*ptr1) + (*ptr2));
                break;

            case 3:
                printf("Product = %.2lf\n", (*ptr1) * (*ptr2));
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}