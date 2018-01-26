#include <stdio.h>
#include <string.h>
int main()
{
char a[100];
int l,i,b,c;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{if(a[i]==' ')
{l--;}
}
printf("%d",l);
return 0;
}
