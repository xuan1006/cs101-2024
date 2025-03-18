#include <stdio.h>

int main(){
	int i=0,j=0,k=0;
	
	scanf("%d",&j);
	for(i=1;i<=j;i++){
		for(k=1;k<=j-i;k++){
			printf(" ");
		} 
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
