#include <stdio.h>

void print_sp(int i,int n){
	int j;
	for(j=0;j<n-i;j++){
		printf(" ");
	}
}
void print_num(int n){
	int j;
	for(j=0;j<n;j++){
		printf("%d ",n);
	}
	printf("\n");
}

int main(){
	int row = 6;
	int i;
	for(i=1;i<=6;i++){
		print_sp(i,row);
		print_num(i);
	}
	
	return 0;
}
