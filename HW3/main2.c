#include <stdio.h>

void replace_all(char* str, char oldChar, char newChar) {
    while (*str != '\0') {           // �u�n���O�r�굲�� '\0'
        if (*str == oldChar) {       // �p�G�ŦX�ؼЦr��
            *str = newChar;          // �������s�r��
        }
        str++;                       // �e�i��U�@�Ӧr��
    }
}

int main() {
    char str[100], oldChar = 'a', newChar = 'A';
    scanf("%s", str);                // ��J�r��]���t�Ů�^

    replace_all(str, oldChar, newChar);  // �I�s�����禡
    printf("%s", str);              // ��X���G

    return 0;
}
