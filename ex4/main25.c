#include <stdio.h>
#include <stdlib.h>

int mulit(int i,int j){
	if(i>9){
		return;
	}
	if(j>9){
		printf("\n");
		mulit(i+1,1);
	}else{
		printf("%d*%d=%d\t",i,j,i*j);
		mulit(i,j+1);
	}
	
}

int main(){
	mulit(1,1);
	
	return 0;
} 
