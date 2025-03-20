#include <stdio.h>

int main(){
	int* ip=0;
	int x=20;
	ip = &x;
	printf("%p\n",&x);
	printf("%d\n",*ip);
	printf("%p\n",ip);
	printf("%p\n",&ip);
	printf("%d\n",x);
	printf("%x\n",x);
}
