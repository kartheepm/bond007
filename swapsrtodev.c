#include<stdio.h>
#include<string.h>
int main()
{
int i,j;
char a[10],b[10];
scanf("%s",&a);
j=strlen(a);
for(i=0;i<j;i++)
{
    if(i%2==0)
    {a[i]=b[i+1]=a[i];}
    else
    {a[i]=b[i-1]=a[i];}
}
for(i=0;i<j;i++)
{printf("%c",b[i]);}
return 0;
}
