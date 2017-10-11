#include <stdio.h>
/*
*BASIC CALCULATOR(aritmethic)
*
*
*/

void main(){
	int number_1, number_2;
	int sum, mult, mod, diff;
	float div;


	/*set the values*/
	printf("put de first number\n");
	scanf("%d", &number_1);
	printf("put de second number\n");
	scanf("%d", &number_2);

	//proces 

	sum = number_1  + number_2;
	div = (float)number_1  / number_2;
	mod = number_1  % number_2;
	mult = number_1 * number_2;
	diff = number_1 - number_2;

	printf("--------------------------------------------------\n"
		"--------------------------------------------------\n");


	//print operations
	printf("the sum of number_1 and number_2 = %d \n", sum);
    printf("difference  of number_1 and number_2 = %d \n", diff);
    printf("product of number_1 and number_2 = %d \n", mult);
    printf("quotient of number_1 and number_2 = %f \n", div);
    printf("modulus of number_1 and number_2  = %d", mod);

    
}
