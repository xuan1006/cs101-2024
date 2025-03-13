#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fp;
    FILE * fpr;
    char m_read[1000];
    fp = fopen("main2.txt", "w+");
    fpr = fopen("main.c", "r");
    fread(m_read, sizeof(m_read), 1, fpr);
    fprintf(fp, "%s", m_read);
    fclose(fp);
    fclose(fpr);

    return 0;
}
