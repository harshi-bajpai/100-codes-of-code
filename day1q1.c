#include<stdio.h>
int main() {
    float num1, num2, sum;

    //input two numbers
    printf("enter first number:");
    scanf("%f", &num1);
    printf("enter second number:");
    scanf("%f",&num2);

    //calculate sum
    sum = num1 + num2;

    //Display result
    printf("Sum :%.2f\n", sum);

    return 0;

}