#include <stdio.h>

int main(){
	char v = 'A';
	int* ip = NULL;
	ip = &v;
	
	printf("Address of v:%d\n",v);
	printf("Address stored in ip:%p\n",ip);
	printf("Address of ip:%p\n",&ip);
	printf("Value of v:%d\n",*ip);	

	return 0;	
}
