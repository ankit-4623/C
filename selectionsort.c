#include<stdio.h>
void selection_sort(int a[],int n)
{
    int temp;
    for (int i = 0; i <=n-2; i++)
    {
        int mini=i;
        for (int j = i; j <=n-1; j++)
        {
            if(a[j]<a[mini])
            {
                mini=j;
            }
        }
        temp=a[mini];
        a[mini]=a[i];
        a[i]=temp;
        
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
    selection_sort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}