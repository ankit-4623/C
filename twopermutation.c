#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
       int n,a,b;
       scanf("%d%d%d",&n,&a,&b);
       if(n==a&&n==b)
       printf("Yes\n");
       else if ((a<=n&&b<=n)&&(n-b+1>a)&&(n-b+1-a>2))
       {
               printf("Yes\n");

       }
       else
       printf("No\n");
       
    }
    
    return 0;
}