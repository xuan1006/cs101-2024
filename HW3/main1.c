#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_winning_line(const char *line, const char *winning[], int win_count) {
    for (int i = 0; i < win_count; i++) {
        if (strstr(line, winning[i]) != NULL) {
            return 1; // 有中獎號碼
        }
    }
    return 0; // 沒有中獎
}

int main() {
    FILE *infile = fopen("lotto.txt", "r");
    FILE *outfile = fopen("win.txt", "w");

    if (!infile || !outfile) {
        perror("檔案開啟失敗");
        return 1;
    }

    // 預設中獎號碼（加上空格避免誤判 02 vs 102）
    const char *winning_numbers[] = { " 02", " 04", " 06" };
    int win_count = sizeof(winning_numbers) / sizeof(winning_numbers[0]);

    char line[256];
    while (fgets(line, sizeof(line), infile)) {
        // 判斷是否是彩券號碼行（格式以 [n]: 開頭）
        if (line[0] == '[') {
            if (is_winning_line(line, winning_numbers, win_count)) {
                fputs(line, outfile); // 寫入中獎行
            }
        }
    }

    fclose(infile);
    fclose(outfile);
    return 0;
}
