#include <stdio.h>

int main(){
	int n=2,m=3;
	func(&n,&m);
	printf("%d,%d",n,m);
}

int func(int *i,int *j){
	int t;
	t = *i;
	*i = *j;
	*j = t;
	return;
}
