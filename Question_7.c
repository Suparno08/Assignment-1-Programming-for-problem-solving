#include <stdio.h>

int main() {
    int choice;
    while (1) {   
        printf("\n---- MENU ----\n");
        printf("1. Check Even or Odd\n");
        printf("2. Find Factorial\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("%d is Even\n", num);
            else
                printf("%d is Odd\n", num);
            break;
        }

        case 2: {
            int n, i;
            long long fact = 1;
            printf("Enter a number: ");
            scanf("%d", &n);
            for (i = 1; i <= n; i++) {
                fact *= i;
            }
            printf("Factorial of %d = %lld\n", n, fact);
            break;
        }

        case 3:
            printf("Exiting from program\n");
            return 0;   

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}
