#include <stdio.h>

int main(){
	char a[20];
	scanf("%s",&a);
	int len = strlen(a);
	int num;
	for (int i = 0 ;i<len;i++){
		num += (a[i]-'0') * pow(2,len-i-1);
	}
	printf("%X\n",num);
	printf("%d",num);
}
