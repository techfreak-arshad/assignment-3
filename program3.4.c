#include<stdio.h>
int main()
{
int num;
printf("Enter the number\n");
scanf("%d",&num);
if((num&1)==0)
printf("no is even");
else
printf("no is odd");
return 0;
}
