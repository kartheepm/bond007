#include<stdio.h>
void main()
{
   char a[10];int i,b;
    gets(a);
   b=strlen(a);
   for(i=0;i<b;i++)
{
if(i==0)
     {a[i]+=-32;}
    else if(a[i]==' ')
     {a[i+1]+=-32;}
}
  printf("%s",a);
  
}
