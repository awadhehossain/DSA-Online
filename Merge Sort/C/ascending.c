#include<stdio.h>

void merge(int arr[],int start ,int mid,int end)
{
   int i=start;
   int j=mid+1;
   int k=start;
   int temp[start+end];

   while(i<=mid && j<=end)
   {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
        }
        k++;
   }

   //remaing right element
   if(i>mid)
   {
    while(j<=end)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }
   }

   //remainning left element
   else
   {
    while(i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
   }

   //Copy from temp to main array
   for(int k=start;k<=end;k++)
   {
    arr[k]=temp[k];
   }

}

void merge_sort(int arr[],int start,int end)
{
    if(start<end)
    {

        int mid=start+(end-start)/2;

        //Left half
        merge_sort(arr,start,mid);

        //right half
        merge_sort(arr,mid+1,end);

        merge(arr,start,mid,end);
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
    merge_sort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
   
    return 0;
}