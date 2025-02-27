#include <stdio.h>

int main(){
    char a[] = "Hello";
    for (int i=0;i<sizeof(a);i++){
        printf("%c",a[(sizeof(a)-i-1)]);
    }
    return 0;
}