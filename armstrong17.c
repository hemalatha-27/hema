#include<stdio.h>
int main()
{int number,original number,remainder,result;
printf("enter a digit:");
scanf("%d",&number);
original number=number;
while(original number!=0)
remainder=originalnumber%10;
result+=remainder*remainder*remainder;
original number/=10;
if(result==number)
printf("%d is armstrong number");
else
printf("%d is not armstrong number");
return 0;
}
