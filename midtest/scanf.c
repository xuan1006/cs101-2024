#include <stdio.h>


int main() {
    char str[20];
    scanf("%s",&str);
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
	printf("\n");
    return 0;
}
