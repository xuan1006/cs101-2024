#include <stdio.h>
#include <stdlib.h>

int main(void){
int floor;
printf("½Ð¿é¤J¼h¼Æ:");
scanf("%d", &floor);
int i, j;
for (i=0; i<floor; i++){
	if(i!=floor-1){
		for (j=0; j<2*floor-1; j++){
			if(j==floor-i-1||j==floor+i-1)
				printf("*");
			else
				printf(" ");
		}
	}
	else{
		for(j=0; j<2*floor-1; j++)
			printf("*");
	}
	printf("\n");
}
}
