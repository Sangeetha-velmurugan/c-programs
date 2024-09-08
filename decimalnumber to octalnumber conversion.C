#include<stdio.h>
void main()
{
int decimalnumber,remainder,sum=0,placevalue=1;
printf("enter the decimal number: \n");
scanf("%d",&decimalnumber);
while(decimalnumber!=0)
{
remainder=decimalnumber%8;
decimalnumber=decimalnumber/8;
sum=sum+remainder*placevalue;
placevalue=placevalue*10;
}
printf("the octal number is %d",sum);
}
