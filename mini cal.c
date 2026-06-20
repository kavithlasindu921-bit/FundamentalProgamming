#include<stdio.h>
int main(){
    int num1;
    int num2;

    printf(" mini calculator");

    printf("enter first number: ");
    scanf("%d : num1");

    printf("enter second number: ");
    scanf("%d : num2");

    printf("Additon : %d\n", num1 + num2);
    printf("Subtraction : %d\n", num1 - num2);
    printf("Multiplication : %d\n", num1 * num2);
    printf("Division : %d\n", num1 / num2);

    return 0;
}