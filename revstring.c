#include<stdio.h >
#include<conio.h>
#include<string.h>
void main()
{
  char st[20],ch;
  int  i,l;
  clrscr();
  printf("Enter the string :-> ");
  gets(st);
  l=strlen(st);
  printf("Original String :-> %s\n",st);
  for(i=0;i<l/2;i++)
  {
   ch=st[i];
   st[i]= st[l-1-i];
   st[l-1-i]=ch;
  }
  printf("Reverse String is :-> %s\n",st);

}
