#include<stdio.h>
int main()
{
int array[100],c,maximum,size,location=1;
printf("enter the number of elements in array\n");
scanf("%d",&size);
printf("enter %d integers\n",size);
for(c=0;c<=size;c++)
scanf("%d",array[c]);
maximum=array[0];
for(c=1;c<size;c++)
{
if(array[c]>maximum)
{
maximum=array[c];
location=c+1;
}
}
printf("maximum element is presentat location %d\n",location,maximum);
return 0;
}
