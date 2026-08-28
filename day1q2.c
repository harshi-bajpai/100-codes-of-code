#include<stdio.h>
int main() {
    float num1, num2;

    //input two numbers
    printf("Enter first number:");
    scanf("%f",&num1);
    printf("Enter second number:");
    scanf("%f",&num2);

    //perform and display arithmetic operations
    printf("sum:%.2f\n", num1 + num2);
    printf("Difference:%.2f\n", num1 - num2);
    printf("Product:%.2f\n", num1 * num2);

    //handle division by zero carefully
    if (num2 != 0) {
        printf("Quotient:%.2f\n", num1/ num2);
    } else {
        printf("Quotient: Division by zero is underfined\n");
    }
    return 0;
}