#include<stdio.h>
#include<conio.h>
 void main()
 {
  int i,arr[20],j,no;
scanf("%d",&no);
  for(i=0;i<no;i++)
  {
   scanf("%d",&arr[i]);
  }
  for(i=0; i<no; i++)
   {
    for(j=i+1;j<no;j++)
    {
    if(arr[i]==arr[j])
    {
    printf("%d\n",arr[i]);
    }
   }
   }
 }
