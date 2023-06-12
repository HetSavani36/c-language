#include<stdio.h>
main(){
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	int i,j,arr[n][n];
	
	for(i=0;i<n;i++){
			for(j=0;j<n;j++){
		printf("a[%d][%d]: ",i,j);
		scanf("%d",&arr[i][j]);
		}
	}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
		printf("%d",arr[i][j]);
}
	printf("\n");
		}
}

