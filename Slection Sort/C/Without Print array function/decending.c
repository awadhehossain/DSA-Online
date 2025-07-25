#include<stdio.h>

//Slection sort
void slection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallest=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[smallest])
            {
                smallest=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[smallest];
        arr[smallest]=temp;
    }
}

//Main function
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
    slection_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}