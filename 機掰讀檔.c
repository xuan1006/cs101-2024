#include <stdio.h>

int main(){
	char *infname="RnJ.txt";
	char line[200];
	char ch;
	int count=0, i=0, n, j;
	FILE *inf=fopen(infname,"rt");
	printf("請輸入要讀第幾行第幾個字元:");
	scanf("%d%d", &n, &j);
	for(i=0; i<n-1; i++){
		fgets(line, 200, inf);
	}
	for(i=0; i<j; i++){
		ch=fgetc(inf);
	}
	fclose(inf);
	printf("c=%c\n", ch);
}
