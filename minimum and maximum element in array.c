// DAY 06 - 30 DAYS CODING CHALLENGE
/*
Given an array of size N. The task is to find the maximum and the minimum element of the array

Examples:

Input: arr[] = {3, 5, 4, 1, 9}
Output: Minimum element is: 1
              Maximum element is: 9

Input: arr[] = {22, 14, 8, 17, 35, 3}
Output:  Minimum element is: 3
              Maximum element is: 35
*/


#include <stdio.h>
int sorting(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int smallestAndLargestElm(int n,int arr[])
{
    sorting(n,arr);

    printf("\nSmallest Element:%d",arr[0]);
    printf("\nLargest Element:%d",arr[n-1]);
}

int main() {
    int n;
    printf("\nHow many elements do yoou want in array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements in array:",n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    smallestAndLargestElm(n,arr);
    return 0;
}
