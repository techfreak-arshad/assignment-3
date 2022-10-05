#include<stdio.h>
#include<math.h>
int main()
{
int num;
printf("enter the num :");
scanf("%d",&num);
if((num%7==0)||(num%3==0))
printf("no divisible by 7 or 3");
else
printf("no is not divisible by 7 or 3");
return 0;
}
