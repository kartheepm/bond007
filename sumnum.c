#include <stdio.h>
int main()
{
 int i,a,b[100],c=0;
 scanf("%d", &a);
 for(i=0;i<a;i++)
 {
 scanf("%d", &b[i]);
 }
 for(i=0;i<a;i++)
 {
 c=c+(b[i]-1)
 }
printf("%d",c);
}
