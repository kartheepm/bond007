#include <stdio.h>
int main()
{
int a,b, i,c,d,e, n = 0,f= 0;
scanf("%d %d",&a,&b);
for(i =a+1;i<b;++i)
{
d= i;
c= i;
while (c!= 0)
{
c/= 10;
++n;
}
while (d!= 0)
{
e=d% 10;
f+=pow(e, n);
d/=10;
}
if(f== i)
{
printf("%d ",i);
}
n=0;
f=0;
}
return 0;
}
