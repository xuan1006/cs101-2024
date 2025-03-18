#include <stdio.h>
#include <stdlib.h>

void numbers(int lotto[], int size) {
    int used[70] = {0};  
    int i = 0;

    while (i < size) {  
        int num = rand() % 69 + 1;  
        if (used[num] == 0) {  
            used[num] = 1;
            lotto[i] = num;
            i++;  
        }
    }
}


int main() {
    int N;
    FILE *file = fopen("lotto.txt","w");  

    if (!file) {
        return 1;  
    }
    scanf("%d", &N);  
    srand(1);  
    fprintf(file, "========= lotto649 =========\n");
    for (int i = 0; i < 5; i++) { 
        fprintf(file, "[%d]: ", i + 1);
        if (i < N) {  
            int lotto[7];
            numbers(lotto, 7);
            for (int j = 0; j < 7; j++) {
                if(j < 6){
                    fprintf(file, "%02d ", lotto[j]);
                }
                else {
                    fprintf(file, "%02d", lotto[j]);
                }  
            }
        } else {
            fprintf(file, "__ __ __ __ __ __ __");  
        }
        fprintf(file, "\n");
    }
    fprintf(file, "========= csie@CGU =========\n");

    fclose(file);  
    return 0;
}
