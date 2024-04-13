#include<stdio.h>
int gcd(int a,int b)
{
    int temp;
    while (b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,count=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1;i<n;i++)
        {
            if(gcd(a[i-1],a[i])<=n)
            {
                count++;
            }
        }
        printf((count>=1)?"Yes\n":"No\n");
    }
    
    return 0;
}