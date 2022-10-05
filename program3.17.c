#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
printf("enter the sides :");
scanf("%d %d %d",&a,&b,&c);
if((a+b)>c)
printf("triangle is possible:");
else
if((b+c)>a)
printf("triangle is possible");
else
if((a+c)>b)
printf("triangle is possible");
else
printf("triangle is not possible");
return 0;
}
