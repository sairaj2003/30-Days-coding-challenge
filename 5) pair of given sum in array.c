 /*
    DAY 05 - 30 DAYS CODING challenge
    Given an array of N integers and an integer k, the task is to finfd the number of pairs of integers in the array whoes sum is equal to K
*/

#include <stdio.h>

int numberOfPairs(int n,int arr[],int target)
{
    int flag=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i] + arr[j]) == target)
            {
                count++;
                flag=1;
            }
        }
    }
    return count;
}

int main() {
    int n;
    int target;
    printf("How many elements do you want in the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter %d elements in the array: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter value of target:");
    scanf("%d",&target);
    int result=numberOfPairs(n,arr,target);
    
    if(result==0)
    {
        printf("\nNo elements");
    }
    else
    {
        printf("\n%d",result);
    }
    return 0;
}
