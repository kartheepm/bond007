#include <stdio.h>
viod main()
{
char a;
scanf("%c", &a);
switch(a)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf("vowel");
break;
default:
printf("not vowel");
}             
}
