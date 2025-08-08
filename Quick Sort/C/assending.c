#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[] , int start , int end)
{
    int pivot=arr[end];
    int index=start-1;
    for(int j=start;j<end;j++)
    {
        if(arr[j]<=pivot)
        {
            index++;
            swap(&arr[j],&arr[index]);

        }
    }
    index++;
    swap(&arr[end],&arr[index]);
    return index;
}

void quicksort(int arr[] , int start, int end)
{
    if(start<end)
    {
        int pivindx=partition(arr,start,end);
        quicksort(arr,start,pivindx-1);//left
        quicksort(arr,pivindx+1,end);//right

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
   quicksort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
   
    return 0;
}