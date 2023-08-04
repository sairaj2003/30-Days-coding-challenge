// Given an array arr[] of non negative integers and integer sum find subarray thhat adds to given sum there may be one subarray with given sum, print first such subarray

//DAY 03 - 30 DAYS CODING

#include <stdio.h>

int subarraySum(int n, int arr[], int target) {
    int i, j, k;
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            for (k = j + 1; k < n; k++) 
            {
                if ((arr[i] + arr[j] + arr[k]) == target) 
                
                {
                    printf("%d , %d , %d\n", arr[i], arr[j], arr[k]);
                    return 1;
                }
            }
        }
    }
    return 0; 
}

int main() {
    int n, target;
    printf("Enter how many elements do you want in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d non-negative integers in the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    if (subarraySum(n, arr, target) == 0) {
        printf("No subarray with sum %d found.\n", target);
    }

    return 0;
}
