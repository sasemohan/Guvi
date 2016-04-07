#include<stdio.h>
void main()
{
int a,tem,res;
printf("enter an randon numeric value");
scanf("%d",&a);
do{
tem=a%10;
tem=tem/10;
res=res*10+tem;
}while(tem!=0)
}
