#include <stdio.h>
void main()
{
int a[10];
int i, j,b,t,k;
scanf("%d", &b);
for (i = 0; i <b; i++)
{
scanf("%d", &a[i]);
}
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
if(a[i]>a[j])
{
t= a[i];
a[i]=a[j];
a[j]=t;
}
}
}
k=b-2;
{
printf("%d\n",a[k]);
}
}
