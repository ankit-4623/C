#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,ans=0,x=1,count=1,v=1;
        scanf("%d",&n);
        while (x<=n)
        {
            ans++;
            x+=v;
            if(count==9)
            {
                count=1;
                v*=10;
                x=v;
                continue;
            }
            count++;
        }
        
        printf("%d",ans);
    }
    
    return 0;
}