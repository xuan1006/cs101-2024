#include <stdio.h>
#include <string.h>

int main(){
	char a[]="AAABBBBCCCCCDDDDDDdd";
	arrayLen(a);
}

void arrayLen(char a[]){
	int len = strlen(a);
	for (int i = 0;i<len;i++){
		int count = 1;
		char now = a[i];
		while(i+1 < len && a[i+1] == now){
			count++;
			i++;
		}
		printf("%d%c",count,now);
	}
	
}
