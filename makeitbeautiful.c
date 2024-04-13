#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
       int n,temp;
       scanf("%d",&n);
       int a[n];
       for (int i = 0; i < n; i++)
       {
        scanf("%d",&a[i]);
       }
       for (int i = 0; i < n; i++)
       {
        if(a[0]==a[n-1])
        {
           printf("\nNo\n");
           break;
        }
        else{
        printf("\nYes\n");
        printf("%d ",a[0]);
       
        for (int i = n-1; i >0; i--)
        {
          
            printf("%d ",a[i]);
        }
        break;
        }
        
       }
       
       
       
    }
    
    return 0;
}