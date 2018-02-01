#include<stdio.h>
int main()
{
int i,j=0,k=0,l;
char a[100];
scanf("%c",&a[i]);
l=strlen(a);
for(i=0;i<l;i++)
{
if(((a[i]>='0')&&(a[i]<='9'))||((a[i]>='A')&&(a[i]<='Z'))||((a[i]>='a')&&(a[i]<='z')))
{j=j;}
else
{k=++k;}
}
printf("%d",k);
return 0;
}
