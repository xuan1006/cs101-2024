#include <stdio.h>
#include <string.h>

int main(){
	char a[]="AAABBBBCCCDDDdd";
	arrayLen(a);
}

void arrayLen(char a[]){
	int len = strlen(a);
	for(int i=0;i<len;i++){
		char now = a[i];
		int count=1;
		while(i+1 < len && a[i+1]==now){
			count++;
			i++;
		}
		printf("%d%c",count,now);
	}
}
