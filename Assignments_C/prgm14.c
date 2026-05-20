//Write a C program that takes a string input from the user and determines whether it is a pangram or not.

#include <stdio.h>
//#include <string.h>

int main() 
{
    char s[500];
    int alphabet[26] = {0};
    int i, index, Pangram = 1;

    printf("Enter a sentence: ");
    scanf("%[^\n]", s);

    for (i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            index = s[i] - 'a';
            alphabet[index] = 1;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') 
        {
            index = s[i] - 'A';
            alphabet[index] = 1;
        }
    }

    for (i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            Pangram = 0;
            break;
        }
    }

    if (Pangram) {
        printf("The string is a Pangram.\n");
    } else {
        printf("The string is not a Pangram.\n");
    }
}