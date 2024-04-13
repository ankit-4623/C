#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        int count=0;
        
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if(a[i]==2)
            {
                count++;
            }
           
        }
        int mul=0,re=-2;
        for(int i=0;i<n;i++)
        {
            mul+=(a[i]==2);
            if(2*mul==count)
            {
                re=i;
                break;
            }
           
        }
         printf("%d\n",re+1);
       
    }
    
    return 0;
}
