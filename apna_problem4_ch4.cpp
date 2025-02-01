#include<stdio.h>

int main()
{
	int n;
	int sum = 0;
	printf("\n Enter The Number: ");
	scanf("%d", &n);
	
/*	for(int i=1; i<=n; i++){
		sum = sum + i;
	}
	printf("Sum is %d \n", sum);*/
	
	for(int i=1, j=n ; i<=n && j>=1 ; i++ , j-- ){
		sum = sum + i;
		printf("%d \n", i);
	} 
	printf("Sum is %d \n", sum);
	
	
	return 0;
}
