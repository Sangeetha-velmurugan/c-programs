#inlcude<stdio.h>
#include<conio.h>
void main()
{
int amt,tot_amt1,tot_amt2;
clrscr();
printf("enter the bill amount:");
scanf("%d",&amt);
if(amt>=1000 && amt>=5000 )
printf("you have got 25% discount");
tot_amt1=(amt*25)/100;
printf("with discount total amount is %d",tot_amt1);
else if(amt>=5000 && amt>=10000)
printf("you have got 50% discount");
tot_amt2=(amt*50)/100;
printf("with discount total amount is %d",tot_amt2);
getch();
}