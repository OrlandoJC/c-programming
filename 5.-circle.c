#include <stdio.h>
#define PI 3.1416


void main(){
	
	float circumference, diameter, area, radius;;

	/*set the values*/
	printf("set the radius :");
	scanf("%f", &radius);
	
	/*calculate*/
	area = PI * (radius * radius);
	circumference = 2 * PI* radius;
	diameter =  2 * radius;
	
	//show results
	printf("\n\nThe area is %.2f\n", area);
	printf("\n\nThe circunference is %.2f\n", circumference);
	printf("\n\nThe diameter is %.2f\n", diameter);


}
