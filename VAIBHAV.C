#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum=0,sub=0,mul=0,div=0;
clrscr();
printf("enter the number\n");
scanf("%d%d",&a,&b);
sum= a+b;
printf("the sum of the number is %d\n",sum);
sub=a-b;
printf("the sub of the number is %d\n",sub);
mul=a*b;
printf("the mul of the number is %d\n",mul);
div=a/b;
printf("the div of the number is %d\n",div);
getch();
}