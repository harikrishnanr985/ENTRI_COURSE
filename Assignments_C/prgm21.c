//Write a C program to remove duplicate elements from a given array.

#include<stdio.h>

int main()
{
    int arr[100], n;
    int i,j,k;

    printf("enter size of array: ");
    scanf("%d", &n);

    printf("enter array elements: ");
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                for ( k=j; k<n-1; k++)
                {
                    arr[k] == arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("After removing duplicates\n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}