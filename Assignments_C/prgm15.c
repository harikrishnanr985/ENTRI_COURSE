//Write a C program that takes a string from the user and replaces every sequence of multiple consecutive spaces with a single space.

#include<stdio.h>

int main()
{
    char s[500], res[500];
    int i,j=0;

    printf("enter a sentence:");
    scanf("%[^\n]", s);

    for ( i= 0; s[i]!='\0'; i++)
    {
        if(s[i]!=' ')
        {
            res[j++] = s[i];
        }
        else if(s[i] == ' ' && s[i+1] != ' ')
        {
            res[j++] = s[i];
        }
    }

    res[j] = '\0';

     printf("string: %s", res);
}