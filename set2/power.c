#include<stdio.h>
int main()
{
int base,exponent;
long long result=1;
printf("enter base:");
scanf("%d",&base);
printf("enter exponent");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;}
printf("answer=%lld",result);
return 0;
}
