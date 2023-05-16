#include<stdio.h>
#include<conio.h>
main()
{
	 int i=11,n;
 clrscr();

 printf("enter a number: ");
 scanf("%d",&n);
 while(i<=n)
 {
	if(n%11==0)
	{
		printf("palindrone number......");

	}

	else
	{
		printf("non palindrone number...");
	}
	n++;
	break;
 }
 getch();
}