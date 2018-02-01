#include <stdio.h>
int main()
{
int i,j,k=1,l=1,m;
scanf("%d",&j);
for (i=1;i<=j;i++)
{
printf("%d ",k);
m=k+l;
k=l;
l=m;
}
return 0;
}
