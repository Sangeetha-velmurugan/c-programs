#inlcude<stdio.h>
void main()
{
float amt,tot_amt1,tot_amt2;
printf("enter the bill amount:");
scanf("%f",&amt);
if(amt>=1000 && amt<=5000 )
printf("you have got 25 percent discount");
tot_amt1=(amt*25)/100;
printf("with discount total amount is %f",tot_amt1);
else if(amt>=5000 && amt<=10000)
printf("you have got 50 percent discount");
tot_amt2=(amt*50)/100;
printf("with discount total amount is %f",tot_amt2);
}
