#include <stdio.h>
#include <stdlib.h>

int* create_number(){
	int* ptr = (int*)malloc(sizeof(int));
	if(ptr != NULL){
		*ptr = 42;
	}
	return ptr;
}

int main() {
	int* number = create_number();
	if(number != NULL){
		printf("%d\n",*number);
		free(number);
	}
	return 0;
}
