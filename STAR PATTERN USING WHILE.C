#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,j;
clrscr();
printf("enter the number of rows:");
scanf("%d",&n);
while(i<=n)
{
j=1;
while(j<=i)
{
printf("*");
j++;
}
printf("\n");
i++;
}
getch();
}