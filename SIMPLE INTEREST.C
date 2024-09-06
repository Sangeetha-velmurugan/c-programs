#include<stdio.h>
int main()
{
float principal,rate,time,simpleinterest,totalamount;
printf("enter the principal amount:");
scanf("%f",&principal);
printf("enter the rate of interest:");
scanf("%f",&rate);
printf("enter the time period");
scanf("%f",&time);
simpleinterest=(principal*rate*time)/100;
totalamount=principal+simpleinterest;
printf(" principal amount: %2f \n",principal);
printf("rate of interest: %2f \n",rate);
printf("time period:%2f \n",time);
printf("simple interest: %2f \n",simpleinterest);
printf("total amount:%2f",totalamount);
return 0;
}
