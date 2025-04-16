#include <stdio.h>

int main(){
	math(9,9);
	return 0;
}

int math(int i,int j){
	if(j == 1 && i == 1){
		printf("%d*%d=%d\n",i,j,i*j);
		return;
	}else if(i != 1 && j == 1){
		math(i-1,j+8);
		printf("%d*%d=%d\n",i,j,i*j);
	}else{
		math(i,j-1);
		printf("%d*%d=%d\t",i,j,i*j);
	}
	
}
