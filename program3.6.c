#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter the number 1\n");
scanf("%d",&num1);
printf("Enter the number 2\n");
scanf("%d",&num2);
if(num1>num2)
printf("number 1 is greater");
else
    if(num1==num2)
printf("both number are same");
else
printf("number 2 is greater");
return 0;
}
