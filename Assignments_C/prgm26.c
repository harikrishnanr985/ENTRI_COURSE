//Write a C program that rearranges an array such that all negative numbers appear before all positive numbers while preserving the relative order of both groups. 

#include <Stdio.h>

int main()
{
    int arr[100], temp[100], n;
    int i,j = 0;

    printf("enter size of array: ");
    scanf("%d", &n);

     printf("enter array elemnets: ");
    for(i = 0; i<n; i++)
    scanf("%d", &arr[i]);

    for(i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    for(i=0; i<n; i++)
    {
        if(arr[i] >= 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    printf("rearranged array\n");
    for(i = 0; i<n; i++){
        printf("%d ", temp[i]);
    }

}