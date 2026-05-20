//Write a C program that rotates the elements of an array by n positions in a specified direction

#include<stdio.h>

int main()
{
    int arr[100], temp[100];
    int n, size, i;
    char dir;

    printf("enter size of array: ");
    scanf("%d", &size);

    printf("enter array elements: ");
    for (i=0; i<size; i++)
    scanf("%d", &arr[i]);

    printf("enter number of position: ");
    scanf("%d", &n);

    printf("enter direction (L for Left, R for Right): ");
    scanf(" %c", &dir);

        n = n % size;

    if(dir == 'L' || dir == 'l') {

        for(i = 0; i < size; i++) {
            temp[i] = arr[(i + n) % size];
        }
    }

    else if(dir == 'R' || dir == 'r') {

        for(i = 0; i < size; i++) {
            temp[(i + n) % size] = arr[i];
        }
    }

    else {
        printf("Invalid direction!\n");
        return 0;
    }

    printf("Rotated Array:\n");

    for(i = 0; i < size; i++) {
        printf("%d ", temp[i]);
    }
}