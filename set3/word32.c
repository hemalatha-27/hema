#include<stdio.h>
#include<string.h>
int main()
{
char sentence[]="beauty lies in the eyes of beholder";
int wordCount=0;
for(int i=0;i<strlen(sentence)-1;i++)
{
if(sentence[i]==''&&isalpha(sentence[i+1])&&(i>0)){
wordCount++;
}
}wordCount++;
printf("total number of words:%d",wordCount);
return 0;
}
