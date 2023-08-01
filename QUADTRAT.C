#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int a,b,c,d;
 float r1,r2;
 clrscr();
 printf("Enter the values of a,b,c:");
 scanf("%d%d%d",&a,&b,&c);
 d=(b*b)-(4*a*c);
 if(d==0)
 {
 r1=-b/(2*a);
 r2=-b/(2*b);
 printf("Root 1:%f \n Root 2:%f:",r1,r2);

  }
 else if(d>0)
   {
   r1=(-b+sqrt(d))/(2*a);
    r2=(-b+sqrt(d))/(2*d);
   printf("Root 1:%f \n Root 2:%f:",r1,r2);
   }
  else
    {
    printf("Roots are imaginary");

    }

    getch();
}