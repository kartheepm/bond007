#include<stdio.h>
void main()
{
char x[30];
char c;
int i;
clrscr();
scanf("%s",x);
for(i=0;x[i]!=NULL;i++)
{
if(x[i]==c)
{
printf("the position is:%d",i);
}
}
}
