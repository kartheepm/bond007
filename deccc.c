#include <stdio.h>
int main()
{
int a[100];
int i,j,b,t;
scanf("%d",&b);
for (i=0;i<b;i++)
{
scanf("%d",&a[i]);
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
for (i=b-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;  
}
