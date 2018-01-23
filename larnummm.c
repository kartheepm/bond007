#include <stdio.h>
int main()
{
int a[50],b, i, l;
scanf("%d", &b);
for (i=0;i<b;i++)
scanf("%d",&a[i]);
l=a[0];
for(i=1;i<b;i++)
{
if (l< a[i])
l=a[i];
}
printf("%d",l);
return 0;
}
