#include <stdio.h>


int main() {
    char str[] = "A4B1C3f3";
    int i,j;
    for (i = 0; str[i] != '\0'; i++) {
        char now = str[i];
        if (isalpha(now)) {
            int count = str[i + 1] - '0';
            for (j = 0; j < count; j++) {
                printf("%c", now);
            }
            i++;
        }
    }
    return 0;
}

