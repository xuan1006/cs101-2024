   #include <stdio.h>
   #include <stdlib.h>
   void main(){
   	FILE *fp;
   	char str[50];
   	fp=fopen("���j�n��", "wt");
   	fputs("���j�n�ӧڦn�R!", fp);
   	fclose(fp);
   	fp=fopen("���j�n��", "rt");
   	if(fp==NULL){
	   	printf("file open error!\n");
	   	exit(1);
	   }
	fscanf(fp, "%s", str);
	printf("str=%s\n", str);
	fclose(fp);
   }
