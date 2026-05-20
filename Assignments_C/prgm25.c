//Write a C program that finds all pairs of elements in an array whose sum equals a given target value. 

#include <Stdio.h>

int main()
{
    int arr[100], n;
    int i,j,target;
    int found = 0;

    printf("enter size of array: ");
    scanf("%d", &n);

    printf("enter array elemnets: ");
    for(i = 0; i<n; i++)
    scanf("%d", &arr[i]);

    printf("enter target sum: ");
    scanf("%d", &target);

    printf("pairs of sum %d\n", target);

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("(%d,%d)\n", arr[i],arr[j]);
                found =1;
            }
        }
    }

    if(found == 0)
    {
        printf("No pairs.\n");
    }

    
}