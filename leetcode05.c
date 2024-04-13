#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int count1=0,count2=0;
    char s[1001];
    gets(s);
    for ( int i= 0,j =strlen(s)-1;i<j; i++,j--)
    {
       if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
       {
        count1++;
       }
       if (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
       {
        count2++;
       }
       
    }
    printf((count1==count2?"true":"false"));
    
    return 0;
}