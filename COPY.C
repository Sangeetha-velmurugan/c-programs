#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,num1[10],num2[10];
clrscr();
printf("enter the number of element:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the element %d:",i+1);
scanf("%d",&num1[i]);
}
printf("elements in num2:");
for(i=0;i<n;i++)
{
num2[i]=num1[i];
printf("\t %d",num2[i]);
}
getch();
}