#include<stdio.h>
int main()
{
double number;
printf("enter a number:");
scanf("%lf",&number);
if(number<=0.0)
{
printf("number is 0");
else
printf("number is negative");
}
else
printf("number is positive");
return 0;
}
