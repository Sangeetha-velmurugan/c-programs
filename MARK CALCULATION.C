#include<stdio.h>
#include<conio.h>
int main()
{
float mark1,mark2,mark3,mark4,mark5,total,average;
clrscr();
printf("\n enter the mark1:");
scanf("%f",&mark1);
printf("\n enter the mark2:");
scanf("%f",&mark2);
printf("\n enter the mark3:");
scanf("%f",&mark3);
printf("\n enter the mark4:");
scanf("%f",&mark4);
printf("\n enter the mark5:");
scanf("%f",&mark5);
total=mark1+mark2+mark3+mark4+mark5;
printf("the total is %f \n",total);
average= (mark1+mark2+mark3+mark4+mark5)/5 ;
printf("the average is %f \n",average);
getch();
return 0;
}