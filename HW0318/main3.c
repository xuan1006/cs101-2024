#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("main2.c", "r");
    FILE *fpr = fopen("main.txt","w");
    char m_read[512];
    int line_num = 0;
    while(fgets(m_read, sizeof(m_read), fp)){
        line_num++;
        if(strstr(m_read,"int main()")){
            fprintf(fpr,"%d\n", line_num);
            break;
        }
    }
    
    fclose(fp);


    return 0;
}
