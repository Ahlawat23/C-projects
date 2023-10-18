#include <stdio.h>

main(){
	printf("Enter the integer upto which you want to print prime numbers");
	int N;
	scanf("%d", &N);
	
	
	int i;
	int j;
	int prime =1;
	printf("\n1 \n2");
	for(i=3;i<=N;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				prime = 0;
			}
		}
	if(prime==1){
		printf("\n%d", i);
		}
		
	prime =1; 		
	}
	getch();
	return 0;
}
