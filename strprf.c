#include<stdio.h>
#include<string.h>
void main()
{
string arr[200] = {"Vishal","Vidharba"};
int n = sizeof(arr) / sizeof(arr[0]);
string ans = commonPrefix(arr, n);
if (ans.length())
printf ("The longest common prefix is - %s",ans.c_str());
else
printf("There is no common prefix");
}
