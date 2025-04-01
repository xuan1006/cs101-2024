#include <stdio.h>
#include <stdlib.h>

int main(){
	int *arr = (int*)malloc(2 * sizeof(int));
	if(arr == NULL){
		return 1;
	}
	
	arr[0] = 10;
	arr[1] = 20;
	
	int *new_arr = (int*)malloc(4 * sizeof(int));
	if(new_arr == NULL){
		return 1;
	}
	
	for(int i=0;i<2;i++){
		new_arr[i] = arr[i];
	}
	new_arr[2] = 30;
	new_arr[3] = 40;
	
	for(int i=0;i<4;i++){
		printf("%d ",new_arr[i]);
	}
	
	free(arr);
	free(new_arr);
	return 0;
}
