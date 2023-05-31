#include<stdio.h>
main()
{
	int n;
	
	printf("enter n: ");
	scanf("%d",&n);
	
	int a[n],i,choice,input;
		for(i=0;i<n;i++)
				{
					printf("a[%d]: ",i);
					scanf("%d",&a[i]);
				}


	int init;
	printf("enter....\n");
		printf("\n");
	printf("1) to insert\n");
	printf("2) to display\n");
	printf("3) to delete\n");
	printf("4) to update\n");
	printf("5) to arrange in ascending order\n");
	printf("enter your choice: ");
	scanf("%d",&choice);
		printf("\n");
	switch(choice)
	{
		case 1:
			{
			for(i=0;i<n+1;i++)
				{
					printf("position to insert: ");
					scanf("%d",&input);	
					printf("a[%d]: ",input);
					scanf("%d",&a[input]);
					printf("%d",a[i]);
					break;
				}
				break;
			}
		case 2:
			{
				for(i=0;i<n;i++)
				{
					printf("a[%d]:%d ",i,a[i]);
				}
				break;
			}
		case 3:
			{
				printf("enter position of element to delete: ");
				scanf("%d",&a);
				
				break;
			}
		case 4:
			{
				
				break;
			}
		case 5:
			{
				printf("%d");	
				break;
			}
		default:
			{
				
			}
		
	}
}
