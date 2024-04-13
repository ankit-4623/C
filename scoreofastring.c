#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[10001];
    gets(s);
    int sum=0;
    for (int  i = 1; i < strlen(s); i++)
    {
        sum+=abs(s[i-1]-s[i]);
    }
    printf("%d",sum);
    

    return 0;
}