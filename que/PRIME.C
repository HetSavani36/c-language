#include<stdio.h>
#include<conio.h>
main()
{
 int i=1,n;
 clrscr();

 printf("enter a number: ");
 scanf("%d",&n);
 while(i<=(n-1))
 {
	if(n%i==0)
	{
		printf("composite......");

	}

	else
	{
		printf("prime number...");
	}
	n++;
	break;
 }
 getch();
}