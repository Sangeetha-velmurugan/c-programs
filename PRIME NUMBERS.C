#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,j;
clrscr();
printf("enter the number to check prime or not:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
j=1;
break;
if(j==1)
printf("number is not prime");
else
printf("number is prime");
getch();
}