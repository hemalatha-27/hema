#include<stdio.h>
int main()
{
int x,y,t;
printf("enter two numbers\n");
scanf("%d%d",&x,&y);
printf("before swapping\nfirst integer=%d\nsecond integer=%d\n",x,y);
t=x;x=y;y=t;
printf("after swapping\nfirst integer=%d\nsecond integer=%d\n",x,y);
return 0;
}
