#include<stdio.h>
int main()
{
int min,hr;
scanf("%d",&min);
 while(min>=60)
{
hr++;
min=min-60;
}
printf("%d %d",hr,min);
return 0;
}
