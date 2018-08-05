#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
printf("enter the value of x and y\n");
scanf("%d%d",&x,&y);
if(x>y)
{
printf("x is greater than y");
}
else if(y>x)

printf("y is greater than x");


else
printf("numbers r equal");
getch();
}
