#include<stdio.h>
void main()
{
int a,b;
scanf("%d",&a);
 while(a>=60)
{
b++;
a=a-60;
}
printf("%d %d",b,a);
}
