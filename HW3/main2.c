#include <stdio.h>

void replace_all(char* str, char oldChar, char newChar) {
    while (*str != '\0') {           // 只要不是字串結尾 '\0'
        if (*str == oldChar) {       // 如果符合目標字元
            *str = newChar;          // 替換為新字元
        }
        str++;                       // 前進到下一個字元
    }
}

int main() {
    char str[100], oldChar = 'a', newChar = 'A';
    scanf("%s", str);                // 輸入字串（不含空格）

    replace_all(str, oldChar, newChar);  // 呼叫替換函式
    printf("%s", str);              // 輸出結果

    return 0;
}
