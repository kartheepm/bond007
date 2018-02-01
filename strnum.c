#include <stdio.h>
#include <string.h>
int main()
{
char a[100];
int l,i,b=0;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{if(a[i]>='0'&&a[i]<='9')
{b++;}
}
printf("%d",b);
return 0;
}

