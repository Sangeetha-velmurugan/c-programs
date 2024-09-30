#include<stdio.h>
void main()
{
int st_id,total,subject,st_mark[30],n,i,j;
float avg;
printf("enter the number of student:");
scanf("%d",&n);
printf("enter the number of subject:");
scanf("%d",&subject);
for(i=0;i<n;i++)
{
printf("\n enter the student id:");
scanf("%d",&st_id);
for(j=0;j<subject;j++)
{
printf("\n enter mark %d:",j+1);
scanf("%d",&st_mark[j]);
total=total+st_mark[j];
avg=total/subject;
}
printf("\n total mark:%d",total);
printf("\n average :%f",avg);
}
}

