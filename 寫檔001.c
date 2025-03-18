   #include <stdio.h>
   #include <stdlib.h>
   void main(){
   	FILE *fp;
   	char str[50];
   	fp=fopen("恩強好帥", "wt");
   	fputs("恩強好帥我好愛!", fp);
   	fclose(fp);
   	fp=fopen("恩強好帥", "rt");
   	if(fp==NULL){
	   	printf("file open error!\n");
	   	exit(1);
	   }
	fscanf(fp, "%s", str);
	printf("str=%s\n", str);
	fclose(fp);
   }
