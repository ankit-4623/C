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
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(gcd(a[j],a[i])<=2)
            {
                count++;
                break;
            }
            }
        }
        printf((count>=1)?"Yes\n":"No\n");
    }
    
    return 0;
}