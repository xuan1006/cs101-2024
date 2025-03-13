#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void num(int l){
    int n =7;
    int cout[n]; 
    FILE* fp;
    fp = fopen("lotto.txt", "w");
    time_t curtime;
    time(&curtime);
    srand(2025);
    fprintf(fp, "%s", ctime(&curtime));
    for (int i =1; i <=l; i++){
        for ( int k =0;k <n; k++){
            
            cout[k] = rand() %69 + 1;
                for ( int j =0;j <k; j++){
                    if (cout[k] == cout[j]){
                        k--;
                        break;
                    }
                }
                
        }
        fprintf(fp, "[%d]: ", i);
        for(int a =0; a <n; a++){
            fprintf(fp, "%d ", cout[a]);
        }
        fprintf(fp, "\n");
    }

    fclose (fp);
    return;
}
int main()
{
    
    int l;
    printf("請輸入要的樂透份數：");
    scanf("%d", &l);
    num(l);
    return 0;
}
