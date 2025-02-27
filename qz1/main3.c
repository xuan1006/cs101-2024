#include <stdio.h>

int main(){
    for(int y=1;y<=9;y++){
        for(int x=1;x<=9;x++){
            printf("%d*%d=%d\t",y,x,y*x);
        }
        printf("\n");
    }
    return 0;
}