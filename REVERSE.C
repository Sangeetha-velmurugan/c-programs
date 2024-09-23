#include<stdio.h>
void main()
{
int rem,num,reverse=0,value;
printf("Enter  a number : ");
scanf("%d",&num);
value=num;
while(num!=0)
{
rem=num%10;
num=num/10;
reverse=reverse*10+rem;
}
printf("Reverse of %d is %d ",value,reverse);
}