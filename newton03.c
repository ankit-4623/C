#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,count=1,val;
    scanf("%d%d",&n,&m);
    for (int i = 1; i <=10; i++)
    {
        val=count*n;
        if (val%10==0||val%10==m)
        {
           printf("%d\n",count);
                   break;
        }
        count++;
        
    }
    
}