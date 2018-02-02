#include <stdio.h>
#include <string.h>
int main()
{
char b[30];
int a[30],l,i,j;
scanf("%s",&b);
l=strlen(b);
for(i=0;i<l;i++)
{
switch (b[i])
{
case 'I':a[i]=1;
break;
case 'V':a[i]=5;
 break;
case 'X':a[i]=10;
break;
default :printf(" ");
break;
}
}
j=a[l-1];
for(i=l-1;i>0;i--)
{
if(a[i]>a[i-1])
{
j=j-a[i-1];
}
if(a[i]<=a[i-1])
{
j=j+a[i-1];
}}
printf("%d",j);
return 0;
}
