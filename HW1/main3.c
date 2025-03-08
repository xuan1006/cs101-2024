#include <stdio.h>

int main() {
    char a[20];
    scanf("%8s",&a);
    int len = strlen(a);
    int num = 0;
	int i;
    for (i=0;i<len;i++) {
        num += (a[i]-'0') * pow(2,len-1-i);
    }
    printf("%X",num);
    return 0;
}
