#include<stdio.h>

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
            
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr [n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    bubble_sort(arr,n);
    printarray(arr,n);

    return 0;

}