#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]==a[j]&&i<j)
        {
            count++;
        }
        
        }
        
    }
    printf("%d",count);
    return 0;
}