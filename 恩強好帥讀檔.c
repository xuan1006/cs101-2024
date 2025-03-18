#include <stdio.h>
#include <stdlib.h>

int main(){
	char *infname="®¦±j¦n«Ó";
	char line[200];
	int count=0;
	
	FILE *inf;
	inf=fopen(infname,"r");
	
	while(feof(inf)==0){
		fgets(line,200,inf);
		printf("%s",line);
		count++;
	}
	printf("\n%d",count);
	
	fclose(inf);
	return 0;
}
