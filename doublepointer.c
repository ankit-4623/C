#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    printf("%d   %d   %d",a,*p,**q);

    return 0;
}  