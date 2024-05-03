#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    char p[1000001];
    gets(s);
    gets(p);
    int i=0,j=0,count=0;
    while (i<strlen(s)&&j<strlen(p))
    {
        if(s[i]==p[i])
        {
            i++;
            count++;
        }
        j++;
    }
    printf("%d\n",count);
    
}