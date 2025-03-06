#include <stdio.h>

int main() {
    char a[] = "10001111";
    int len = strlen(a);
    int num = 0;
	int i;
    for (i=0;i<len;i++) {
        num += (a[i]-'0') * pow(2,len-1-i);
    }
    printf("%X",num);
    return 0;
}

