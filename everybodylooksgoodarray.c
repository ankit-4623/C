#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,count=0;
        scanf("%d",&n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i = 1; i < n; i++)
        {
            if((a[i-1]%2)==(a[i]%2))
            {
                count++;
            }
        }
        printf("%d",count);
        
        
    }
    
    return 0;
}