#include<stdio.h>
int main()
{
char ch;
printf("Enter the character :\n");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
printf("upper case character");
else
if(ch>='a'&&ch<='z')
printf("lower case character");
else
printf("invalid character");
return 0;
}
