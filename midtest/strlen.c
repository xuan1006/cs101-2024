#include <stdio.h>

int main(){
	char a[]={"IU is a girl!"};
	printf("%d",len);
	printf("%slen:%d",a,alen(a));
}
int alen(char *a){
	if(!*a){
		return;
	}
	return 1+alen(a+1);
}
