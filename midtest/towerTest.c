#include <stdio.h>

int main(){
	int n=3;
	tower(n,'a','b','c');
}

void tower(int n,char a,char b,char c){
	if(n==1){
		printf("\n Move disk 1 from rod %c to rod %c",a,b);
		return;
	}
	tower(n-1,a,c,b);
	printf("\n Move disk %d from rod %c to rod %c",n,a,b);
	tower(n-1,c,b,a);
}
