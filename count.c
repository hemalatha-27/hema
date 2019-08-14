#include<stdio.h>
int main()
{
long long num;
int count=0;
printf("enter any number:");
scanf("%lld",&num);
while(num!=0)
{
count++;
num/=0;
}
printf("total digits:%d",count);
return 0;
}
