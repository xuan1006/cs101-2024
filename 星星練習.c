#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=0,num=0,count=0,k=0,j=0;
	
	printf("¿é¤J:");
	scanf("%d",&num);
	
	for(i=0;i<=num;i++){
		for(k=0;k<num-i;k++){
			printf(" ");
		}
		for(k=0;k<2*i-1;k++){
			if((k==0)||(i==num)||(k==2*i-2))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	
}

 \
 
