#include <stdio.h>
#include <stdlib.h>
int fun(int i){
	if(i == 1){
		return 1;
	}
	return i * fun(i - 1);
}

int main(){
	int i=5;
	int j=fun(i);	
	printf("fun %d=%d\n",i,j);
} 
