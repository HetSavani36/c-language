#include<stdio.h>
#include<conio.h>
main()
{
int i,n,sum=0;
 clrscr();
 printf("enter a number: ");
 scanf("%d",&n);

 for(i=1;i<=n ;i++ )
 {
	printf("\n%d ",i);
	sum=sum+i;
 }
 printf("\n\nsum: %d",sum);
 getch();
}