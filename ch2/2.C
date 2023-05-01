#include<stdio.h>
#include<conio.h>
main()
{
int r = 4;
float pi =3.14;
int a = 2;
int b =4;
float c=.5;
clrscr();
 printf("\tArea of Circle\t\t : %f*%d*%d = %f\n",pi,r,r,pi*r*r);
 printf("\tArea of Square\t\t : %d*%d = %d \n",r,r,r*r);
 printf("\tArea of Triangle\t : %.1f*%d*%d = %.1f \n",c,a,b,c*a*b);
 printf("\tArea of Rectangle\t : %d*%d = %d\n",a,b,a*b);

getch();


}