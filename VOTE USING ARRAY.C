#include<stdio.h>
void main()
{
int vote[10],c,candid,i,v,maxvote,pos=-1;
printf("enter the number of candidate:");
scanf("%d",&c);
printf("enter the number of voters:");
scanf("%d",&v);
for(i=0;i<c;i++)
{
vote[i]=0;
}
for(i=0;i<v;i++)
{
printf("voter %d:",i+1);
scanf("%d",&candid);
vote[candid]++;
}
maxvote=0;
for(i=0;i<c;i++)
{
if(maxvote<vote[i])
{
maxvote=vote[i];
pos=i;
}
}
printf("\n candidate id %d",pos);
printf("\n number of vote %d",maxvote);
}
