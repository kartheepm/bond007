#include <stdio.h>
#include <string.h>
int main()
{
char a[100];
int l,i,b=1;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{if(a[i]=='.')
{b++;}
}
printf("%d",b);
return 0;
}
