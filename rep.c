#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,k;
scanf("%d",&j);
int a[20];
for(i=0;i<j;i++)
{scanf("%d",&a[i]);}
for(i=0;i<j;i++)
{
    for(k=i+1;k<j;k++)
{
if(a[i]==a[k])
printf("%d ",a[i]);}
}
}


