#include<stdio.h>

//For swaping the value 
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int count=0;
//Selection sort
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallest=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallest])
            {
                smallest=j;
            }
        }
        if(smallest!=i)
        {
            count++;
             swap(&arr[i],&arr[smallest]);
        }
       
    }
}

//For printing the array
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
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
    selection_sort(arr,n);
    printf("Swap Count:%d\n",count);
    printarray(arr,n);
    return 0;
    
}