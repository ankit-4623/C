#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int j,n;
    scanf("%d",&n);
    int a[n];
     for (int i = 0; i < n; i++)
    {
      scanf("%d",&a[i]);
    }
    
    
    for (int i = 0; i <n ; i++)
    {
       for (int k = i+1; k < n; k++)
       {
         if(a[i]==a[k])
        {
            for( j=k;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            n--;
            k--;
        }
       }
       
    }
    
      for (int i = 0; i < n; i++)
      {
        printf("%d",a[i]);
      }
      
    return 0;
}