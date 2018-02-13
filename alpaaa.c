#include <stdio.h>
#include<string.h>
int main() 
{
	char a[50],b[50];
	int i,j,k;
	scanf("%s %s",a,b);
	j=strlen(a);
    for(i=0;i<j;i++)
	{
	if(a[i]==b[i])
	{
	 k++;
	}
	}
	if(k>0)
	{
	printf("yes");	
	}
	else
	{
	printf("no");	
	}
	return 0;
}
