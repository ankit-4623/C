#include<stdio.h>
#include<string.h>
int main()
{
    int m=0,n,count=0;
    char s[10000];
    gets(s);
   for (int i = strlen(s)-1; i>=0; i--)
   {
    if ( s[i]==' ' && m==1)
    {
       break;
    }
    else if ( s[i]!=' ')
    {
        count++;
        m=1;
    }
    
   }
   
    printf("%d",count);
    
    return 0;
}