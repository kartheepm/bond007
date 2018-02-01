#include <stdio.h>
#include <string.h>
int main()
{
char a[10],b[10];
gets(a);
gets(b);
strrev(a);
strrev(b);
printf("%s",a);
printf("%s",b);
return 0;
}
