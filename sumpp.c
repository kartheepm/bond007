#include<stdio.h>
int main()
{
int a,b,c,d,e;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
e=b;
while(b<=a)
{
 d=d+(e+c);   
b++;
}
printf("%d",d);
return 0;
}
