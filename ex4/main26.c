#include <stdio.h>

int strlen(char* s){
	if(!*s){
		return 0;
	}
	return 1+strlen(s+1); 
}

int main(){
	char s[] = "IU is a girl!";
	printf("(%s)len=%d\n",s,strlen(s));
	return 0;
} 
