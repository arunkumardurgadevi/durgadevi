#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the number");
scanf("%d",&a);
if(a>0)
{
printf("given number is positive");
}
else if(a<0)
{
printf("given number is negative");
}
else
{
printf("given number is zero");
}
getch();
}
