#include <stdio.h>
#include <string.h>

void arrayLen(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char now = str[i];
        int count = 1;
        while (i + 1 < len && str[i + 1] == now) {
            count++;
            i++;
        }
        printf("%c%d", now, count);
    }
}

int main() {
    char a[] = "AABBBCCCCddd";
    arrayLen(a);
    return 0;
}
