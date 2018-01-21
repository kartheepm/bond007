#include <stdio.h>
int main()
{
int a,b,c,d,e;
scanf("%d", &a);
b=a;
while (a!=0)
{
c=a%10;
d=pow(c,3);
e=e+d;
a=a/10;
}
if (e==b)
{printf ("yes");}
else
{printf ("not");}
return 0;
}
