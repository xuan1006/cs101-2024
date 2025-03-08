#include <stdio.h>

int main(){
    char a[100];
    scanf("%s",&a);
    int len = strlen(a);
    int i;
    for (i=0;i<len;i++){
        printf("%c",a[(len-i-1)]);
    }
    return 0;
}
