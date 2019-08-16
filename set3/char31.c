#include<stdio.h>
#include<string.h>
int main()
{
char string[]="the best of both words";
int count=0;
for(int i=0;i<strlen(string);i++)
{
if(string[i]!='')
count++;
}
printf("total number of characters in a string:%d",count);
return 0;
}
