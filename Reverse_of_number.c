#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,tem=0,res=0;
clrscr();
printf("enter an random numeric value");
scanf("%d",&a);
while(a!=0){
tem=a%10;
res=res*10+tem;
a=a/10;
}
printf("REVERSED %d",res);
getch();
}
