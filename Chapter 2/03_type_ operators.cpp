#include <stdio.h>

int main() {
    float a = 9;
    int b = 2;
    int d=6.7;
    float c = 9.0 / 2;
    printf("The value of c is %f", c);
    printf("\nthe value of d is %d",d); /* int d= 3.5 is demoted to 3 cause 
    now it is a float value but according to rules it is a float valur*/
    return 0;
}

