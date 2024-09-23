#include<stdio.h>
void main()
{
int i,range, Fibonacci,f1=0,f2=1;
printf("Enter Range : ");
scanf("%d",&range);
printf("0\t1\t");
for(i=1;i<range;i++)
{
Fibonacci=f1+f2;
f1=f2;
f2=Fibonacci;
printf("%d\t", Fibonacci);
}
}