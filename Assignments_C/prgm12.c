//Write a C program that takes a string from the user and checks whether it is a palindrome.

#include<stdio.h>

int main()
{
    char s[50];
    int i,j;

    printf("enter a string: ");
    scanf("%s", s);

    for (j = 0; s[j]; j++);

    for(i=0,j=j-1; i<j;i++,j--)
    {
        if(s[i] != s[j])
        break;
    }

    if(i<j)
    printf("given string is not a palindrome...\n");
    else
    printf("given string is a palindrome...\n");
}