#include<stdio.h>
#include<conio.h>
main()
{
int a=0,b=1,n,i=1,c;
 clrscr();
 printf("enter a number : ");
 scanf("%d",&n);

 while(i<=n)
 {
	printf("%d \n",a);
	 c=a+b;
	 a=b;
	 b=c;
	 i++;
 }


 getch();
}