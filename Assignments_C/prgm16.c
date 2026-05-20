//Write a C program that takes a string from the user and converts all uppercase letters into their corresponding lowercase letters.

#include<stdio.h>

int main()
{
    char s[50];
    int i;

    printf("enter a string: ");
    scanf("%[^\n]", s);

    printf("Before conversion: %s\n", s);

    for(i=0; s[i]; i++)
    {
        if( ((s[i]>=65)&&(s[i]<=90))||((s[i]>=97)&&(s[i]<=122)) )
        s[i] = s[i]^32;
    }

    printf("After conversion: %s\n", s);
}