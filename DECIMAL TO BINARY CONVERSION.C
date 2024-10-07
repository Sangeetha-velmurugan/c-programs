#include<stdio.h>
int binary(int num)
{
int rem,i=1,sum=0;
while(num!=0)
{
rem=num%2;
sum+=rem*i;
num=num/2;
i=i*10;
}
return(sum);
}
void main()
{
int x;
printf("enter x:");
scanf("%d",&x);
printf("%d",binary(x));
}
