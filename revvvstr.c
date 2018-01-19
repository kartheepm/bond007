#include <stdio.h>

void main()
{
    int n, n1, v = 0, r;
    scanf("%d", &n);    
    n1 = n;

        r = n % 10;
        v = v * 10 + r;
        n = n / 10;
    }
    
    if (n1 == v){
        printf("yes"); 
    }
    else{
        printf("no"); 
    }    
    
} 
