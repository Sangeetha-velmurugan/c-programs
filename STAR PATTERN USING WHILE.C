#include<stdio.h>
void main()
{
int n,i=1,j;
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
}
