#include<stdio.h>
int main()
{
char ch;
printf("enter a character:\n");
scanf("%c",&ch);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
printf("%c is a vowel\n",ch);
else
printf("%c is a consonent\n",ch);
return 0;
}
