#include <stdio.h>
void main()
{
int a;
scanf ("%d", &a);
if (a%4 == 0) 
{
if(a%100 == 0)
{
if(a%400 == 0)
printf("LEAP YEAR.");
else
printf("NOT LEAP YEAR.");
}
else
{
printf ("LEAP YEAR.");
}
}
else
printf("NOT LEAP YEAR.");
}
