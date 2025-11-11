#include <stdio.h>

int main() {
    int arr[10], *p, i = 0, max;
    p = arr;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = *p;
    i = 1;

    while(i < 10) {
        if(*(p + i) > max) {
            max = *(p + i);
        }
        i++;
    }

    printf("Largest number = %d", max);
    return 0;
}
