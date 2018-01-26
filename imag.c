#include<stdio.h>
int main()
{
int a[10],i,j;
scanf("%d",&j);
for(i=0;i<j;i++)
{scanf("%d",&a[i]);}
for(i=0;i<j;i++)
{printf("%d %d \n",a[i],i);}
return 0;
}
