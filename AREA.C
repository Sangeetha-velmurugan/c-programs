#include<stdio.h>
int main()
{
float area1,side,perimeter1,length,breadth,area2,perimeter2;
printf("enter the value of the side of the square :");
scanf("%f",&side);
area1=side*side;
perimeter1=4*side;
printf("the area of the square is: %f \n",area1);
printf("the perimeter of the square is: %f \n",perimeter1);
printf(" \n enter the value of length:");
scanf("%f",&length);
printf("\n enter the value of breadth:");
scanf("%f",&breadth);
area2=length*breadth;
perimeter2=2*(length+breadth);
printf("the area of the rectangle is %f \n",area2);
printf("the perimeter of the rectangle is %f \n",perimeter2);
return 0;
}
