#include<stdio.h>
int main(){
    int n,pow=1,rem = 0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while (n>0)
    {
        rem = n % 10;
        n = n / 10;
        printf("%d",rem);

    }
    

    return 0;
}