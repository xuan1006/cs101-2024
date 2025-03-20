#include <stdio.h>

int main(){
	int* ip;
	int var=20;
	ip = &var;
	
	printf("Value of *ip = %d\n",*ip);
	printf("Value of var=%p\n",ip);
	printf("Address of var=%p\n",&var);
	printf("Address of ip=%p\n",&ip);
	
	int x;
	int* ptr = &x;
	printf("scanf:\t");
	scanf("%d",ptr);
	printf("x =\t%d\n",x);
	
	return 0;
}
