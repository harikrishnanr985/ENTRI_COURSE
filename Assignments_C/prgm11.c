//Write a C program that takes an integer from the user and converts it into a string of characters


#include <stdio.h>
#include <string.h>

int main() {
    int num, temp, i = 0, Negative = 0;
    char str[20], rev[20];

    printf("Enter a whole number: ");
    scanf("%d", &num);

    if (num < 0) {
        Negative = 1;
        num = -num;
    }

    temp = num;

    if (temp == 0) {
        rev[i++] = '0';
    }

    while (temp > 0) {
        rev[i] = (temp % 10) + '0';
        temp = temp / 10;
        i++;
    }

    if (Negative) {
        rev[i++] = '-';
    }

    rev[i] = '\0';
    
    int len = strlen(rev);
    int j;

    for (j = 0; j < len; j++) {
        str[j] = rev[len - j - 1];
    }

    str[len] = '\0';

    printf("String representation: %s\n", str);
}
