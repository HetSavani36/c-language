#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,d;
clrscr();
	printf("enter a: ");
	scanf("%d",&a);
		printf("enter b: ");
	scanf("%d",&b);
		printf("enter c: ");
	scanf("%d",&c);
	d=(a*a)+(b*b)+(c*c)+2*((a*b)+(b*c)+(c*a));
	printf("%d",d);
getch();






}