#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d", &b);

    while (b != 0)
    {
        c *= a;
        --b;
    }

    printf("%d",a);

}
