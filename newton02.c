#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}
int main()
{
    int n,pos;
    scanf("%d", &n);
    char s[101];
    scanf("%s", s);
    for (int i = 0; i < n; i++)
    {
       if (vowel(s[i])&&vowel(s[i+1]))
       {
        
        for ( int j = i; j < n-1; j++)
        {
            s[j]=s[j+1];
            
        }
        s[n - 1] = '\0';
        n--;
        i--;
       }
       
    }
    printf("%s",s);
    //printf("%d",pos);
    
    return 0;
}