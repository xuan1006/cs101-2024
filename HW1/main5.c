#include <stdio.h>

void print_sp(int i,int r){
	int j;
	for(j=0;j<r-i;j++){
		printf(" ");
	}
}
void print_num(int n){
	int j;
	for(j=0;j<n;j++){
		if(j==n-1){
			printf("%d",n);
		}else if(j<n){
			printf("%d ",n);
		}
	}
	printf("\n");
}

int main(){
	int row;
	scanf("%d",&row);
	int i;
	for(i=1;i<=row;i++){
		print_sp(i,row);
		print_num(i);
	}
	
	return 0;
}
