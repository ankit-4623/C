#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter two number of gcd :");
    scanf("%d%d",&a,&b);
    while (b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("The gcd value of two numbers is := %d",a);
    return 0;
}