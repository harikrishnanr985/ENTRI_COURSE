//Write a C program that uses functions to evaluate a simple arithmetic expression given two numbers and an operator.

#include <stdio.h>

float sum(float a, float b)
{
    return a + b;
}
float subtract(float a, float b){
    return a-b;
}
float mul(float a, float b){
    return a*b;
}
float div(float a, float b){
    if(b==0){
        printf("Error");
    }
    return a/b;
}
float total(float a, float b, char op)
{
    switch(op)
    {
        case '+':
         return sum(a, b);
        case '-': 
         return subtract(a, b);
        case '*': 
         return mul(a, b);
        case '/': 
         return div(a, b);

        default:
            printf("Invalid Operator\n");
    }
}

int main()
{
    float num1, num2, res;
    char op;

    printf("Enter first number:");
    scanf("%f", &num1);

    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &op);

    printf("Enter second number:");
    scanf("%f", &num2);

    res = total(num1, num2,op);
    printf("Result = %2f\n", res);

}

