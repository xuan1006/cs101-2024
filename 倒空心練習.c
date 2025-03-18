#include <stdio.h>
#include <stdlib.h>

int main(){
	int count=0,i=0,k=0,num=0;
	
	printf("¿é¤J");
	scanf("%d",&num);
	num=num*2-1;
	
	for(i=0;i<=num/2;i++){
		for(k=0;k<=i;k++){
			printf(" ");
		}
		for(k=0;k<num-i*2;k++){
			if(k==0||i==0||k==num-1-i*2)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
} 
