#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fp=fopen("main.txt", "w");
    FILE * fpr= fopen("main2.c", "r");
    char m_read[200];
    fread(m_read, sizeof(m_read), 1, fpr);
    fprintf(fp, "%s", m_read);
    fclose(fp);
    fclose(fpr);
	
    return 0;
}
