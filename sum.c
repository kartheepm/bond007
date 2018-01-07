#include <stdio.h>
void main() 
{
int i,a[20],b,c,d=0;
scanf("%d",&b);
scanf("%d",&c);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<c;i++)
{
d=d+a[i];
}
printf("%d",d);
}
