/*
    DAY 04 : CODING challenge
    An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
    
    input : 1 -2 3 -4 5 -6
    output: -2 -4 -6 1 3 5 
*/
#include <stdio.h>

void rearrangeNegativesAndPositives(int arr[], int n) {
    int temp[n];
    int negativeIndex = 0;
    int positiveIndex = n-1;

    for (int i=0;i<n;i++) 
    {
        if (arr[i] < 0) 
        {
            temp[negativeIndex++] = arr[i];
         } 
    }
    
    for(int i=n-1;i>=0;i--)
    {
        if (arr[i] > 0) 
        {
            temp[positiveIndex--] = arr[i];
        }
    }
    printf("Modified arrayy:");
    for(int i=0;i<n;i++)
    {
        printf("%5d",temp[i]);
    }
}

int main() {
    int n;
    printf("Enter how many elements do you want in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers in the array: ", n);
    for (int i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }

    rearrangeNegativesAndPositives(arr, n);
    return 0;
}
