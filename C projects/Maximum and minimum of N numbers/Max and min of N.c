/*Maximum and minimum of N numners*/
#include <stdio.h>


main(){
	printf("Find the maximum and minimum element in an array\n");
	printf("--------------------------------------------------\n");
	
	int N;
	int i;
	
	printf("Enter the number of elements to be stored in array\n");
	scanf("%d", &N);
	
	int arr[N];
	printf("\n\nInput %d numbers\n", N);
	for(i=0;i<N;i++){
		scanf("%d", &arr[i]);	
	}
	
	
	
	int max = arr[0];
	printf("\nThe maximum number is:");
	
	
	for(i=0;i<N;i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf(" %d", max);
	
	
	
	int min=arr[0];
	printf("\nThe minmum number is:");
	
	for(i=0;i<N;i++){
		if(min>arr[i]){
			min = arr[i];
		}
	}
	printf(" %d", min);


	getch();
	return 0;	
}

