#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct StudentRecord{
	char name[30];
	int gender;
	int bdate;
	int scores[3];
	struct StudentRecord* next;
};
StudentRecord* read_file(FILE* inf);
StudentRecord* make_node(char* name,char* gender,int* yy,int* mm,int* dd,sc1,int* sc2,int* sc3);
int main(){
	FILE *inf;
	inf=fopen("term.txt","rt");
	StudentRecord* head=read_file(inf);
	
	fclose(inf);
	
}

StudentRecord* read_file(FILE* inf){
	char name[30];
	char gender[1];
	int yy=0,mm=0,dd=0;
	int sc1=0,sc2=0,sc3=0;
	StudentRecord* node=NULL;
	StudentRecord* head=NULL;
	
	while(!feof(inf)){
		fgets(name,30,inf);
		fscanf(inf,"%c\n",&gender);
		fscanf(inf,"%d %d %d\n",&yy,&mm,&dd);
		fscanf(inf,"%d %d %d\n",&sc1,&sc2,&sc3);
		node=make_node(name,gender,yy,mm,dd,sc1,sc2,sc3);
		head=add_tail(head,node);
	}
}
StudentRecord* make_node(char* name,char* gender,int* yy,int* mm,int* dd,sc1,int* sc2,int* sc3){
	
}
