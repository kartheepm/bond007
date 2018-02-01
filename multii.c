#include <stdio.h>
int main()
{
int i,m,n=1;
scanf("%d",&m);
for (i=1;i<=m;i++)
{
n*=i;    
}
printf("%d ",n);
return 0;
}
