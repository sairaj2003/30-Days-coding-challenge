// kth largest element in an array
//DAY 01 - 30 DAYS CODING

#include <stdio.h>

void sorting(int n,int arr[])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
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

int kthlargestElm(int n,int arr[],int k)
{
    int i;
    sorting(n,arr);
    printf("\n%d  largest element is %d",k,arr[k-1]);
    
}
int main() {
    int n,k;
    printf("\nEnter how many elements do you want in array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d Elements in array:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\nEnter target value(k):");
    scanf("%d",&k);
    kthlargestElm(n,arr,k);
    return 0;
}
