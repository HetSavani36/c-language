#include<stdio.h>

int add(int a ,int b){
	int sum;
	sum = a+b;
}

void main(){
int cal,sum,a,b;	
printf("enter a: ");
scanf("%d",&a);
printf("enter b: ");
scanf("%d",&b);

	printf("enter...");
	printf("1) for +");
	printf("2) for -");
	printf("3) for *");
	printf("4 for /");
	printf("5) for %");
	scanf("%d",&cal);

	switch(cal) 
	{
		case 1:
			{
				add(a,b);
				printf("%d",sum);
				break;
			}
	}
}






















































































































