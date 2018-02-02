#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,j;
gets(a);
j=strlen(a);
for(i=0;i<=j;i++)
{if(i==j)
    {printf(".");}
    else
{printf("%c",a[i]);}
}
return 0;
}


