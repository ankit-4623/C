#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int r,c,val=0,max=0,ans,a=0;
    scanf("%d",&r);
    int ar[r][2];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d",&ar[i][j]);
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        val=pow(ar[i][0],2)+pow(ar[i][1],2);
        
         
        if(val==max)
        ans=ar[i][0]*ar[i][1]>ans?ar[i][0]*ar[i][1]:ans;
                if (val > max ) {
            max = val;
            ans=ar[i][0]*ar[i][1];
        }

         
        
    }
   
printf("%d\n",ans);
return 0;
}