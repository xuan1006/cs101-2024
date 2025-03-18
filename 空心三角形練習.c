#include <stdio.h>

int main(){
	int num=0,i=0,k=0;
	
	scanf("%d",&num);
	for(i=0;i<=num;i++){
		for(k=0;k<num-i;k++){
			printf(" ");
		}
		for(k=0;k<2*i-1;k++){
			if(i==num||k==0||k==2*i-2){
				printf("i");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
} 
