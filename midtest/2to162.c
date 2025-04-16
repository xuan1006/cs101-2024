#include <stdio.h>
#include <string.h>

int main(){
	char a[20];
	scanf("%s",&a);
	int len = strlen(a);
	int num;
	for(int i = 0;i<len;i++){
		num += (a[i]-'0') * pow(2,len-1-i);
	}
	printf("%d\n",num);
	printf("%X",num);
	
}
