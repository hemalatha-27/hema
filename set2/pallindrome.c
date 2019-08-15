#include<stdio.h>
int main()
{
int n,reverse=0,t;
printf("enter a number");
scanf("%d",&n);
t=n;
while(t!=0)
{
reverse=reverse*10;
reverse=reverse+t%10;
t=t\10;
}
if(n=reverse)
printf("num is palindrome");
else
printf("num is not palindrome");
return 0;
}
