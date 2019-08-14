#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
int arr[50],k,sum=0;
printf("enter the value of n");
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<k;i++)
{
sum=sum+arr[i];
}
printf("%d",sum);
getch();
}
