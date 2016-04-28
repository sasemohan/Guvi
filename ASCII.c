#include<stdio.h>
#include<conio.h>
void main()
{
char aa,a;
int b;
clrscr();
while(aa!='n')
{
printf("enter the charecter for which you need the ASCII value");
scanf("\n%c",&a);
b=a;
printf("%d",b);
printf("do you wish to continue");

}
scanf("%c",&aa);
getch();
}
