#include<stdio.h>
#include<stdlib.h>
int main()
{
char str[]="112";
int number=0,i;
for(i=0;str[i]!='\0';i++)
{
if(isdigit(str[i]!=0)
number++;
}
printf("decimal digits=%d\n",number);
return 0;
}
