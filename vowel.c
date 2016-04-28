#include<stdio.h>
#include<conio.h>
void main()
{
char a[5]={'a','e','i','o','u'};
char b;
int i=0;
clrscr();
printf("enter the character to be checked");
scanf("\n%c",&b);
for(i=0;i<5;i++)
{
if(a[i]==b)
{
printf("vowel");
}
else
{
printf("consonent");
}
}
getch();
}
