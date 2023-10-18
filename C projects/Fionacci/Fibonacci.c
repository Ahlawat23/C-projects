/*Fibonacci series
*/
#include <stdio.h>


main(){
	int a=0;
	int b=1;
	int N, i;
	int c;
	
	printf("Enter the number of terms you want to print\n");
	scanf("%d", &N);
	
	printf("Fibonacci series:");
	
	for( i=0; i<=N;i++){
		c = a+b;
		
		printf(" \n%d ", c);
		
		a=b;
		b=c;
		
		
	}
	getch();
	return 0;
}
