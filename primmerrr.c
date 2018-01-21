#include<stdio.h>
int main()
{
int i,j,k,l,m,n;
scanf("%d",&k);
scanf("%d",&l);
i=k+1;j=l-1;
for(i;i<=j;i++)
{n=0;
for(m=2;m<i;m++)
{
if(i%m==0)
{
n=1;
break;
}}
if(n==0)
{printf("%d",i);}
}return 0;
}
