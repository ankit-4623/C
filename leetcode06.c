#include<stdio.h>
#include<stdio.h>
int main()
{
    int n,k,temp,sum=0;
       scanf("%d%d",&n,&k);
       int a[n],b[n],c[sum];
       for (int  i = 0; i < n; i++)
       {
         scanf("%d",&a[i]);
       }
        for (int  i = 0; i < k; i++)
       {
         scanf("%d",&b[i]);
       }
      for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < k; j++)
      {
        if(a[i]==b[j])
        {
           c[sum++]=a[i];
        }
      }
      
    }
    for (int i = 0; i <sum ; i++)
    {
       for (int k = i+1; k < sum; k++)
       {
         if(c[i]==c[k])
        {
            for( int j=k;j<sum-1;j++)
            {
                c[j]=c[j+1];
            }
            sum--;
            k--;
        }
       }
       
    }
    for (int i =0; i< sum; i++)
    {
      printf("%d",c[i]);
    }
       
    return 0;
}