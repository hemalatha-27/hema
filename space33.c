#include<stdio.h>
#include<stdlib.h>
void main()
{
char str[50];
int i,count=0;
clrscr();
printf("\nenter any string:");
gets(str);
for(i=0;str[i];i++)
if(str[i]=='')
count++;
printf("\ntotal blank space:%d",count);
getch();
}
