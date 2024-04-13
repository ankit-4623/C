#include <stdio.h>
#include <stdlib.h>
   int main()
{
    int n,m,temp,sum=0,count=0,val=0;
    scanf("%d%d",&n,&m);
    int apple[n],capacity[m];
      for (int i = 0; i < n; i++)
    {
       scanf("%d",&apple[i]);
    }
      for (int i = 0; i < m; i++)
    {
       scanf("%d",&capacity[i]);
    }
    
   
    for (int i = 0; i < m; i++)
    {
      for (int j = i+1; j < m; j++)
      {
        if(capacity[i]<capacity[j])
        {
            temp=capacity[i];
            capacity[i]=capacity[j];
            capacity[j]=temp;
        }
      }
      
    }
    for (int i = 0; i < n; i++)
    {
       sum+=apple[i];
    }
    for (int i =0; i< m; i++)
    {
     if(val>=sum)
     {
         printf("%d",count);
     }
        val+=capacity[i];
        count++;
    }
     if(val>=sum)
     {
         printf("%d",count);
     }
    return 0;
    

}