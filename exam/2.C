#include<stdio.h>
#include<conio.h>
main()
{
int HRA,DA,TA;
int p;
clrscr();
printf("base salary: ");
scanf("%d",&p);
HRA=(.1)*p;
DA=(.05)*p;
TA=(.08)*p;
printf("total: %d",p+HRA+DA+TA);
getch();
}