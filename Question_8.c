#include <stdio.h>

int main() {
    int arr[5], *p, i = 0, sum = 0;
    p = arr;
    printf("Enter five numbers:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    i = 0;
    while(i < 5) {
        sum = sum + *(p + i);
        i++;
    }

    printf("Sum is %d", sum);
    return 0;
}
