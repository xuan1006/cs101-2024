#include <stdio.h>

int main(){
    FILE* fp = fopen("a.bin","wb");
    
    int a[] = {0,1,2};
    char b[] = "ABC";
    float c[] = {1.1,1.2,1.3};

    fwrite(a,sizeof(int),3,fp);
    fwrite(b,sizeof(char),3,fp);
    fwrite(c,sizeof(float),3,fp);

    fclose(fp);
	
	int ra[3];
    char rl[3]={0};
    float rf[3];
    
    fp = fopen("a.bin","rb");
    
    fread(ra,sizeof(int),3,fp);
    fread(rl,sizeof(char),3,fp);
    fread(rf,sizeof(float),3,fp);
    
    fclose(fp);
    
    int i;
    for(i=0;i<3;i++){
    	printf("%d ",ra[i]);
	}
	printf("\n");
	for(i=0;i<3;i++){
    	printf("%c ",rl[i]);
	}
	printf("\n");
	for(i=0;i<3;i++){
    	printf("%f ",rf[i]);
	}
	
}
