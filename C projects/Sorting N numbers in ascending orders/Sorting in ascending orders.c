#include<stdio.h>

int main(){
	int N;
	printf("Enter the value of N that is how many numbers you want to input\n");
	scanf("%d", &N);
	int arr[N];
	int i,j;
	
	printf("Enter the numbers\n");
	for(i=0;i<N;i++){
		scanf("\n%d", &arr[i]);
	}
	
	printf("There ascending order is");
	
	
	 
	for(i=0;i<N;i++){
		for(j= i+1;j<N;j++){
			if(arr[i]>arr[j]){
				int a ;
				a = arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		} 
	}
	
	for(i=0;i<N;i++){
		printf(" %d,", arr[i]);
	}
	
	getch();
	return 0;
}
