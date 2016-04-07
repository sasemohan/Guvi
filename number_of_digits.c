#include<stdio.h>
void main()
{
int a,tem,res,count=0;
printf("enter an randon numeric value");
scanf("%d",&a);
do{
tem=a%10;
tem=tem/10;
res=res*10+tem;
count++;
}while(tem!=0)
printf("%d",count);
}
