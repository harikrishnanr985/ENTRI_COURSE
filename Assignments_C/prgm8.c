//Write a C program that uses functions to convert a decimal number to any base between 2 and 16

#include <stdio.h>

void decimalToBase(int num, int base) {
    char result[50];
    char digits[] = "0123456789ABCDEF";
    int index = 0, remainder, i;

    if (num == 0) {
        printf("Converted number = 0\n");
        return;
    }

    while (num > 0) {
        remainder = num % base;
        result[index] = digits[remainder];
        index++;
        num = num / base;
    }

    printf("Converted number = ");

    for (i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }

    printf("\n");
}

int main() {
    int num, base;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Enter the base (2 to 16): ");
    scanf("%d", &base);

    if (base < 2 || base > 16) {
        printf("Invalid base! Please enter a base between 2 and 16.\n");
    } else {
        decimalToBase(num, base);
    }
}