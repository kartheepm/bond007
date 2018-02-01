#include <stdio.h>
int main()
{
int i,j;
scanf("%d%d",&i,&j);
i=i^j;
j=i^j;
i=i^j;
printf("%d %d",i,j);
return 0;
}
