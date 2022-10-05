#include<stdio.h>
int main()
{
int a,b,c,D;
printf("Enter the values\n");
scanf("%d %d %d",&a,&b,&c);
printf("Quadratic eqn is=%d(x*x)+%dx+%d ",a,b,c);
D=b*b-4*a*c;
if(D>0)
printf("\nroots are real");
else if(D==0)
printf("\nroots are equal");
else
printf("\nroots are imaginary");
return 0;
}
