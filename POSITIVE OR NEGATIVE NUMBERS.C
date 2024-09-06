#include<stdio.h>
#include<conio.h>
void main()
{
int num,a;
clrscr();
printf("enter a number:");
scanf("%d",&num);
printf("enter case number:");
scanf("%d",&a);
switch(a)
{
case 1:
if(num>0)
printf("%d is positive number",num);
else if(num<0)
printf("%d is negative number",num);
break;
default:
printf("neither positive nor negative");
}
getch();
}