#include<stdio.h>
#include<conio.h>
main()
{
int i=1,n;
 clrscr();
 printf("enter number: ");
 scanf("%d",&n);

 while(i<=10)
 {
	printf("table: %d * %d : %d \n",n,i,n*i);
	i++;
 }
 getch();
}