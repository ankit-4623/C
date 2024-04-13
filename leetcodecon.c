#include <stdio.h>
#include <math.h>

int main() {
    int n ,re,max=0,count=0,num;
    scanf("%d", &n);
    int a[n];

    int sum = 0;
    for (int i = 0; i < n; i++) {
       
        scanf("%d", &a[i]);
        num=a[i];
        while (num!=0)
        {
            re=num%10;
            
            if(max<re)
            {
                max=re;
            }
            sum = sum + max*pow(10,count);
           num/=10;
           count++;
        }
        
        
    }

    printf("%d\n", sum);

    return 0;
}
