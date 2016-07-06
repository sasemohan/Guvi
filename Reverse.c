#include<stdio.h>
#include<conio.h>
void main()
{
int number,reversed=0;
printf("enter the number ");
scanf("%d",&number);

while(number!=0)
{
reversed=reversed*10;
reversed=reversed+number%10;
number=number/10;
}
printf("REVERSE OF THE NUMBER IS %d",reversed);
getch();
}
