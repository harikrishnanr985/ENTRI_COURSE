//Write a C program that merges two sorted arrays into a single sorted array without using any sorting function


#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2;
    int i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    // Merge arrays
    while(i < n1 && j < n2) {

        if(arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        }
        else {
            merged[k] = arr2[j];
            j++;
        }

        k++;
    }

    while(i < n1) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2
    while(j < n2) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    // Display merged array
    printf("Merged Sorted Array:\n");

    for(i = 0; i < k; i++) {
        printf("%d ", merged[i]);
    }
}