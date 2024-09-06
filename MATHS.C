#include<stdio.h>
int main()
{
int a,b=4,c=7,d=5,e=6,f=9;
a=b+(c*d)+(e*f);
printf("the value of b+(c*d)+(e*f)= %d\n",a);
a=(b+c)/d+(e*f);
printf("the value of (b+c)/d+(e*f)= %d \n",a);
a=(b+c)/(d+e)*f;
printf("the value of (b+c)/(d+e)*f= %d \n",a);
return 0;
}
