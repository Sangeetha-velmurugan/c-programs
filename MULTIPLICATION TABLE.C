#include<stdio.h>
#include<conio.h>
void main()
{
 int x=1,y,mul;
 clrscr();
 printf("enter the tbale:");
 scanf("%d",y);
 for(x=1;x<=10;x++)
 {
  mul=x*y;
  printf("%d * %d=%d",x,y,mul);
 }
 getch();
 }