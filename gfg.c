#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int j;
    char s[10001];
    gets(s);
    int n=strlen(s);
    for (int i = 0; i <n ; i++)
    {
       for (int k = i+1; k < n; k++)
       {
         if(s[i]==s[k])
        {
            for( j=k;j<n-1;j++)
            {
                s[j]=s[j+1];
            }
            n--;
            k--;
        }
       }
       
    }
    
      for (int i = 0; i < n; i++)
      {
        printf("%c",s[i]);
      }
      
    return 0;
}



