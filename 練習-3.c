#include <stdio.h>

int main(){
	int i=0,j=0,k=0;
	
	printf("¿é¤J:");
	scanf("%d",&i);
	
	for(j=0;j<=i;j++){
		for(k=0;k<i-j;k++)
			printf(" ");
		for(k=0;k<2*j-1;k++){
			printf("*");
		}
		printf("\n"); 
	}
}
