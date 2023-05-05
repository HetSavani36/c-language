#include<stdio.h>
#include<conio.h>
main()
{
int m;
 clrscr();
 printf("enter marks: ");
 scanf("%d",&m);
 if(m>=0 && m<=33)
 {
 printf("fail");
 }
 else if(m>=90 && m<=100)
 {
 printf("A1");
 }
 else if(m>=80 && m<=89)
 {
 printf("A2");
 }
 else if(m>=70 && m<=79)
 {
 printf("B1");
 }
 else if(m>=60 && m<=69)
 {
 printf("B2");
 }
 else if(m>=50 && m<=59)
 {
 printf("C1");
 }
 else if(m>=40 && m<=49)
 {
 printf("C2");
 }
 else if(m>=30 && m<=32)
 {
 printf("D1");
 }
 else
 {
 printf("invalid marks");
 }
 getch();
}