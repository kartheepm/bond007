#include <stdio.h>
int main()
{
int i,j,k=0,a[10],b[10],n,c=0,t;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
if(a[i]==i)
{
c++;
b[k]=a[i];
k++;
}
if(c==0)
printf("-1");
else
{for(i=0;i<c;i++)
{for(j=i+1;j<c;j++) 
if(b[i]>b[j])
{
t=b[i];
b[i]=b[j];
b[j]=t;
}
printf("%d ",b[i]);
}}return 0;
}
