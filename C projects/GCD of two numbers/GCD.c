/*GCD of two number*/
#include <stdio.h>

main(){
	
	int n1, n2;
	printf("Enter the two numbers of which you want to find GCD\n");
	scanf("%d %d", &n1, &n2);
	

	
	int i;
	int GCD;
	for(i=1;i<=n1 && i<=n2;i++){
		if(n1%i==0 && n2%i==0){
			GCD = i;
		}
	}
	
	printf("The GCD is: %d", GCD);
	getch();
	
	return 0;
}
