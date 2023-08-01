#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,d,s=0,r=0;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
i=n;
while(i!=0)
{
d=i%10;
r=r*10+d;
s=s+d;
i=i/10;
}
printf("\n sum of digits is :%d",s);
printf("\n reverse of number is:%d",r);
getch();
}