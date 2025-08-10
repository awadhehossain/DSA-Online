#include<stdio.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}


void shell_sort(int arr[],int n)
{
    for(int gap=n/2;gap>=1;gap=gap/2)
    {
        for(int j=gap;j<=n-1;j++)
        {
            for(int i=j-gap;i>=0;i=i-gap)
            {
                if(arr[i+gap]>arr[i])
                {
                    break;
                }
                else
                {
                    swap(&arr[i+gap],&arr[i]);
                }
            }
        }
    }
}

int main ()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    shell_sort(arr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}