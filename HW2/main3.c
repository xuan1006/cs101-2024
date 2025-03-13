#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char m_read[512];
    int line_num = 0;
    fp = fopen("main.c", "r");
    while(fgets(m_read, sizeof(m_read), fp)){
        line_num++;
        if(strstr(m_read,"int main()")){
            printf(" %d int main(){", line_num);
            break;
        }
    }
    
    fclose(fp);


    return 0;
}
