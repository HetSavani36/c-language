#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("ENTER A DIGIT: ");
	scanf("%d",&a);
	(a%2==0)
		? printf("EVEN NUMBER")
		: printf("ODD NUMBER");
		getch();
}