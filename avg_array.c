#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i=0,sum=0,avg;
printf("enter the values in the array");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
avg=sum/10;
printf("%d",avg);
}
