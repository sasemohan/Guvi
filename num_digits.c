#include<stdio.h>
#include<conio.h>
void main()
{
int num,tem1,tem2,rev;
printf("enter the number");
scanf("%d",&num);
tem1=num;
do{
tem2=tem1%10;
rev=rev*10+tem2;
tem1=tem1/10;
}while(tem1!=0)
printf("%d",rev);
}
