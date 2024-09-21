#include<stdio.h>
void main()
{
int num1,num2,remainder,divided,divisor;
printf("enter the number:");
scanf("%d",&num1);
printf("enter the number:");
scanf("%d",&num2);
if(num1>num2)
divided=num1;
else
divisor=num2;
while(num2!=0)
{
remainder=divided%divisor;
if(remainder==0)
{
dividede=divisor;
break;
}
divided=divisor;
divisor=remainder;
}
printf("gcd of the number %d and %d is ",num1,num2,divided);
}

