#include <stdio.h>
int its_a_rectangle(int w, int h);

void main(){
	int i, j;/*counters*/
	int width, heigth;
	int area;

	/*set the values*/
	printf("put de width :");
	scanf("%d", &width);
	printf("put de heigth :");
	scanf("%d", &heigth);


	if(its_a_rectangle(width, heigth) == 1){
		area = width * heigth;
	}
	else{
		printf("its a square\n");
		return;
	}
	//proces sum
	

	printf("------------------------------\n\n");
	for (i = 0; i < heigth; ++i)
	{
		for (j = 0; j < width; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	
	printf("\n\nThe area is %d\n", area);


}

int its_a_rectangle(int w, int h){
	if( w != h) return 1;
}

