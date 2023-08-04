// Given sorted array arr[] and number X write a function that counts occurence of X in array
//DAY 02- 30 DAYS CODING

#include <stdio.h>

int countElm(int n,int arr[],int x)
{
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    printf("\n Count:%d",count);
}
int main() {
    int n,x;
    printf("\nEnter how many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d Elements in array:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\nEnter target value(x):");
    scanf("%d",&x);
    countElm(n,arr,x);
    return 0;
}
