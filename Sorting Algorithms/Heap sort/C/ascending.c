#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void Maxhepify(int arr [],int n,int i)
{
    int largest=i;
    int l=2*i;
    int r=(2*i)+1;

    if(l<=n && arr[l]>arr[largest])
    {
        largest=l;
    }

    if(r<=n && arr[r]>arr[largest])
    {
        largest=r;
    }

    if(largest!=i)
    {
        swap(&arr[largest],&arr[i]);
        Maxhepify(arr,n,largest);
    }
}

void Heapsort (int arr[],int n)
{
    for(int i=n/2;i>=1;i--)
    {
        Maxhepify(arr,n,i);
    }

    for(int i=n;i>=2;i--)
    {
        swap(&arr[1],&arr[i]);
        Maxhepify(arr,i-1,1);
    }
}

int main()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Heapsort(arr,n);

    for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
   
    return 0;
}
