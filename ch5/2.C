#include<stdio.h>
#include<conio.h>
main()
{
int a;
 clrscr();
 printf("enter a number:");
 scanf("%d",&a);
 if(a>0)
 {
 printf("positive");
 }
 else if(a=0)
 {
 printf("neutral");
 }
  else
 {
 printf("negative");
 }
 getch();
}