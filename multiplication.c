#include<stdio.h>
#include<conio.h>
void main()
{
int number,tem1,n,i=0;
printf("enter the value for the multiplication table");
scanf("%d",&number);
printf("enter the limit of the multiplication table");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
tem1=number*i;
printf("%d\t *\t%d\t=\t%d\n",number,i,tem1);
}
getch();
}
