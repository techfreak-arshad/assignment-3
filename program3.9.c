#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the numbers :\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
a>c?printf("%d",a):printf("%d",c);
}
else
{
b>c?printf("%d",b):printf("%d",c);
}
printf("\n");
return 0;
}
