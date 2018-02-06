#include<stdio.h>
#include<string.h>
int main()
{
int i,j;
char a[10],b[10];
scanf(%s,&a);
scanf(%s,&b);
j=strlen(a);
for(i=0;i<=j;i++)
{if (a[i]==a[i+1]&&b[i]==b[i+1])
printf("yes");
else
printf("no");}
return 0;
}
