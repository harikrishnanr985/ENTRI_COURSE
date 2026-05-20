//Write a C program that uses an array to find the second largest and second smallest element in a list of numbers

#include<stdio.h>

int main()
{
    int arr[100],n;
    int i,big1,big2,small1,small2;

    printf("enter size of array: ");
    scanf("%d", &n);

    printf("enter array elements: ");
    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(arr[0] > arr[1])
    {
        big1 = arr[0];
        big2 = arr[1];
    }
    else{
         big2 = arr[0];
         big1 = arr[1];
    }

    for(i=2; i<n; i++)
    {
        if(arr[i] > big1){
            big2 = big1;
            big1 = arr[i];
        }
        else if((arr[i] > big2) && (arr[i]!=big1)){
            big2 = arr[i];
        }
    }
    
    if(arr[0] < arr[1])
    {
        small1 = arr[0];
        small2 = arr[1];
    }
    else{
        small1 = arr[1];
        small2 = arr[0];
    }

    for(i=2; i<n; i++)
    {
        if(arr[i] > small1){
            small2 = small1;
            small1 = arr[i];
        }
        else if((arr[i] < small2) && (arr[i]!=small1)){
            small2 = arr[i];
        }
    }
    

        if (big1 == big2 || small1 == small2) {
        printf("All elements are the same OR no second largest/smallest exists.\n");
    }
    else {
        printf("Second Largest Element = %d\n", big2);
        printf("Second Smallest Element = %d\n", small2);
    }



}