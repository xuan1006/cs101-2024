#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_winning_line(const char *line, const char *winning[], int win_count) {
    for (int i = 0; i < win_count; i++) {
        if (strstr(line, winning[i]) != NULL) {
            return 1; // ���������X
        }
    }
    return 0; // �S������
}

int main() {
    FILE *infile = fopen("lotto.txt", "r");
    FILE *outfile = fopen("win.txt", "w");

    if (!infile || !outfile) {
        perror("�ɮ׶}�ҥ���");
        return 1;
    }

    // �w�]�������X�]�[�W�Ů��קK�~�P 02 vs 102�^
    const char *winning_numbers[] = { " 02", " 04", " 06" };
    int win_count = sizeof(winning_numbers) / sizeof(winning_numbers[0]);

    char line[256];
    while (fgets(line, sizeof(line), infile)) {
        // �P�_�O�_�O�m�鸹�X��]�榡�H [n]: �}�Y�^
        if (line[0] == '[') {
            if (is_winning_line(line, winning_numbers, win_count)) {
                fputs(line, outfile); // �g�J������
            }
        }
    }

    fclose(infile);
    fclose(outfile);
    return 0;
}
