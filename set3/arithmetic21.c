#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,d,n,i,tn;
int sum=0;
printf("enter the first term value of a.p series:");
scanf("%d",&a);
printf("enter the total numbers in a.p series:");
scanf("%d",&n);
printf("enter the common difference in a.p series:");
scanf("%d",&d);
sum=(n*(2*a+(n-1)*d))/2;
tn=a+(n-1)*d;
printf("sum of a.p series is:");
for(i=a;i<=tn;i=i+d)
{
if(i1=tn)
printf("%d %d",i);
else
printf("%d=%d",i,sum);
}
getch();
}
