//Define a structure Complex with real and imaginary parts. Write a C program to add two complex numbers and display the result.

#include<stdio.h>

typedef struct
{
    float real;
    float imag;
}complex;

complex add(complex a, complex b)
{
    complex res;
    res.real = a.real + b.real;
    res.imag = a.imag + b.imag;

    return res;
}

void display(complex c)
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main()
{
    complex num1,num2,sum;

    printf("enter first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("enter second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    sum = add(num1,num2);

    display(sum);
}