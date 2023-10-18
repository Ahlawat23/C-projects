#include <stdlib.h>
#include <math.h>

float num(float angle, float raisedTo){
	int i;
	float nume =1;
	for(i=1;i<=raisedTo;i++){
		nume = nume*angle;
	}
	return nume;
}

float den(float number){
	float i;
	float fact =1;
	for(i=1;i<=number;i++){
		fact = fact*i;
	}
	
	return fact;
}

float sine(float x, float acc){
	
	
	float value;
	float fval = 0;
	int toggle =1;
	
	float i; 
	for(i=1;i<=acc;i=i+2){
	 if(toggle == 1){
	 	value = num(x,i)/den(i);
	 	fval = fval + value;
	 	toggle = 0;	
	 }
	 else{
	 	value = num(x,i)/den(i);
	 	fval = fval - value;
	 	toggle = 1;
	 }
	}
	
	printf("sin %f = %f", x, fval);
	
}

float cosine(float x, float acc){
	
	
	float value;
	float fval =0;
	int toggle =1;
	
	float i;
	for(i=2;i<=acc;i=i+2){
		if(i==2){
			value = num(x,i)/den(i);
			fval = 1 - value;
			toggle = 0;
		}
		else if(toggle == 1){
			value = num(x,i)/den(i);
			fval = fval - value;
			toggle = 0;
		}
		else{
		value = num(x,i)/den(i);
	 	fval = fval + value;
	 	toggle = 1;	
		}
	}
	
	printf("\ncos %f = %f", x, fval);
	
}

main(){
	printf("To calculate the value of sin x and cos x");
	printf("\n------------------------------------------\n");
	
	float angle, acc;
	printf("Enter the value for angle in degrees first and then for accuracy\n");
	scanf("%f %f", &angle, &acc);
	
	
	float x = (angle*3.14)/180;

	sine(x, acc);
	
	cosine(x, acc);
	
	getch();
	
	return 0;
}


