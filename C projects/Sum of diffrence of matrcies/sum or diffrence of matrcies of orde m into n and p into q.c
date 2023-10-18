#include <stdio.h>

int main(){
	int m, n, p, q;
	printf("Enter the value for M, N, P and Q\n");
	scanf("%d %d %d %d", &m, &n, &p, &q);
	
	int mat1[m][n];
	int mat2[p][q];
	
	printf("\nEnter the values of first matrix\n");
	
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf(" %d", &mat1[i][j]);
		}
		printf("\n");
	}
	/*
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf(" %d", &mat1[i][j]);
		}
		printf("\n");
	}
	
	/*Entering value in the solution Matrix*/
	
	int sol[m+p][n+q];
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sol[i][j]= mat1[i][j];
		}
	}
	printf("before %d\n", sol[1][0]);
	for(i=0;i<m;i++){
		for(j=n;j<=n+q;j++){
			if(j!=0){
			sol[i][j] = 0;
		}
		}	
	}
	printf("after %d\n", sol[1][0]);	
	/*Printing the value of solution Matrix*/
	
	for(i=0;i<=m+p;i++){
		for(j=0;j<=n+q;j++){
			printf(" %d", sol[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
