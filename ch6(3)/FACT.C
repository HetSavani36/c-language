#include<stdio.h>
#include<conio.h>
main()
{
int i=1,n,fact=1;
 clrscr();
 printf("enter a number: ");
 scanf("%d",&n);

 while(i<=n)
 {
	fact *= i;
	i++;
 }
 printf("\n\nfactorial: %d",fact);
 getch();
}