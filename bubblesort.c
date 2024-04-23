#include<stdio.h>
void bubble_sort(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int swap=0;
       for (int j = 0; j<n-i; j++)
    {
        if(a[j]>a[j+1])
        {
            int temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
            swap=1;
        }
    }
         if(swap==0)
         {
            break;
         }
       printf("\ncount\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}