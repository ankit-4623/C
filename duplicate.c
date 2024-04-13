// Find duplicate element in the array and remove it.

#include<stdio.h>
#include<stdlib.h>
#define max 10;
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d",&a[i]);
    }

    for (int i = 1; i < n; i++)
    {
            if(a[count]!=a[i]){
               count++;
                a[count]=a[i];

        }
    }
 printf("%d\n",count+1);
    for (int i = 0; i <=count; i++)
    {
      printf("%d ",a[i]);
    }

    return 0;
}