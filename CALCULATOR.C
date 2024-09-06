#include<stdio.h>
void main()
{
char op;
float num1,num2;
printf("enter the arithmetic operator (+,-,/,*):");
scanf("%c",&op);
printf("enter number1:");
scanf("%f",&num1);
printf("enter number2:");
scanf("%f",&num2);

switch(op)
{
case'+':
printf("%f + %f =%f",num1,num2,num1+num2);
break;
case'-':
printf("%f - %f =%f",num1,num2,num1-num2);
break;
case '/':
printf("%f / %f = %f",num1,num2,num1/num2);
break;
case '*':
printf("%f * %f = %f",num1,num2,num1*num2);
break;
}
}

