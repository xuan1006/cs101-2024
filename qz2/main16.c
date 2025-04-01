#include <stdlib.h>
#include <stdio.h>

int* func(){
	int* ptr = (int*)malloc(sizeof(int));
	if(ptr != NULL){
		*ptr = 99;
	}
	return ptr;
}

int main(){
	int *num = func();
	if(num != NULL){
		printf("%d\n",*num);
		free(num);
	}
	return 0;
}
