/*Котов Матвей 202-ИС Керниган 1.15*/
#include <stdio.h>
#define LOWER 0
#define UPPER 300 
#define STEP 20 
int main (){
	int conversion();
	int fahr,a,b;
	printf("Conversion from Fahrenheit to Celcius\n");
	conversion();
	return 0;
}
int conversion(){
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf ("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	return 0;
}

