//Write a C program that takes a string of digits from the user and converts it into its equivalent integer value

#include <stdio.h>
#include <string.h>

int main()
{
    
char s[20];
int i = 0;
int num = 0;

printf("Enter the number: ");
scanf("%s", s);

while(s[i] != '\0')
{
    num = (num * 10 + (s[i] - '0'));
    i++; 
}
printf("Integer Val = %d\n", num);

}

