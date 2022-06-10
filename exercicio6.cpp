#include <stdio.h>

int main(){
	
	int F;
	float C;
	
	for (F = 40; F <= 60; F ++){
		
		C = (5.0/9.0) * (F-32);
		
		printf("\n\nA temperatura %i em Fahrenheit corresponde a %0.2f em Celsius", F, C); 
	}	
	
	return(0);
}
