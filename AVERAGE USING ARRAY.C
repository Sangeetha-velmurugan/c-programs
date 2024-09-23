#include<stdio.h>
void main()
{
int num[10],n,i,max=0,min=9;
printf("enter how many numbers:");
scanf("%d",n);
for(i=1;i<=n;i++)
{
printf("num %d:",i);
scanf("%d",num[i]);
if(num[i]>n)
{
max=num[i];
}
else
{
min=num[i];
}
printf("minimum number:",min);
printf("maximum number:",max);
}
