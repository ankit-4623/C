#include<stdio.h>
#include<stdlib.h>
int cmp(void const*a,void const*b)
{
    return(*(int*)a-*(int*)b);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
}