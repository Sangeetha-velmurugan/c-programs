#include<stdio.h>
void main()
{
int mark;
printf("enter the mark1:");
scanf("%d",&mark);
if(mark>=80 && mark<=100)
printf("you have got A grade");
else if(mark>=40 && mark<80)
printf("you have got B grade");
}