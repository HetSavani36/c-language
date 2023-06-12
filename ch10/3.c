#include<stdio.h>
main(){
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	int i,arr[n];
	
	for(i=0;i<n;i++){
		printf("a[%d]: ");
		scanf("%d",&arr[i]);
	}
}
