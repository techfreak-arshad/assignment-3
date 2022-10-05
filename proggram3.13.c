#include<stdio.h>
#include<math.h>
int main()
{
int num;
printf("enter the num :");
scanf("%d",&num);
if((num%2==0)&&(num%3==0))
printf("no divisible by 2 and 3");
else
printf("no is not divisible by 2 and 3");
return 0;
}
