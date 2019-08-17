#include<stdio.h>
int main()
{
char str[100];
int i,special;
i=special=0;
printf("please enter any string:");
gets(str);
while(str[i]!='\0')
{if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
{
special++;
i++;
}
printf("number of special characters=%d",special);
return 0;
}
