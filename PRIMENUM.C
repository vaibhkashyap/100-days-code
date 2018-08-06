#include<stdio.h>
#include<conio.h>
void main()
{
int x,i,c=0;
clrscr();
printf("enter a number u want to chek");
scanf("%d",&x);
for(i=2;i<=(x/2);i++)
{
if(x%i==0)
{
c=c+1;
break;
}
}
if(c==1)
printf("this is not a prime number");
else
printf("the number is a prime number");
getch();
}