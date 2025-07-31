#include<stdio.h>

void insertion_sort (int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int unsorted=arr[i];
        int j;
        for(j=i-1;j>=0 && arr[j]<unsorted;j--)
        {
            arr[j+1]=arr[j];
        }

        arr[j+1]=unsorted;
    }
}

int main()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
   
    return 0;
    
}