#include<stdio.h>

void div();

void div(){
	
	int a;
	printf("enter a number: ");
	scanf("%d",&a);
	if(a%3==0 && a%5==0){
		printf("the given number is divisible by both 3 & 5");
	}
	else{
		printf("the given number is not divisible by both 3 & 5");
	}
	}
main()
{
	div();
}


