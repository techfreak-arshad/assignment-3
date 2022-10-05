#include<stdio.h>
#include<math.h>
int main()
{
float cp,sp;
float profit,loss;
printf("Enter the cost price:");
scanf("%f",&cp);
printf("\nEnter the selling price:");
scanf("%f",&sp);
if(sp>cp)
{
profit=(sp-cp)*100/cp;
printf("profit percent is :%.2f",profit);
}
else
{
loss=(cp-sp)*100/cp;
printf("loss percent is :%.2f",loss);
}
printf("\n");
return 0;
}
