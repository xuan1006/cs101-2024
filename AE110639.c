#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct StudentRecord StudentRecord;
struct StudentRecord{
	char name;
	char gender;
	int bdata;
	int scores[3];
	StudentRecord* next;
};
int read_file(FILE* inf,StudentRecord *head);
int length(StudentRecord* head);
StudentRecord get(StudentRecord* head, int index);
void show_list(StudentRecord* head);
void find_by_name(StudentRecord* head, char* query);
void  find_by_bdate(StudentRecord* head, int date, int start_index);
void showProfile(StudentRecord *head);
void Add_Profile(
	StudentRecord* head,
	char* name,
	char gender,
	int bdata,
	int scores
	);
int main(){
	FILE *inf=NULL;
	inf=fopen("term.txt","r");
	StudentRecord *head=read_file(inf);
	showProfile(head);
	fclose(inf);
	return 0;
}
int read_file(FILE* inf,StudentRecord *head){
	if(inf==NULL){
		printf("FileNotFoundException!");
		return -1;
	} 
	char name[32],gender;
	int bdata;
	int scores[3];
	while(!feof(inf)){
		fgets(name,32,inf);
		fscanf(inf,"%c\n",&gender);
		fscanf(inf,"%d",bdata);
		fgets(scores,"%d,%d,%d",inf);
		Add_Profile(head,name,gender,bdata,scores);
	}
	return 0;
}
int length(StudentRecord* head){
	int count=0;
	StudentRecord* current=NULL;
	current = head;
	while (current != NULL) {
		count++;
		current = current->next;
	}
	return count;
}
void Add_Profile(StudentRecord* head,char* name,char gender,int bdata,int scores){
	StudentRecord *current=head;
	while(current->next!=NULL)current=current->next; 
	current->next=(StudentRecord*)malloc(sizeof(StudentRecord));
	*(current->next)=(StudentRecord){
		.name=name,
		.gender=gender,
		.bdata=bdata,
		.scores=scores,
		.next=NULL
	};
	strcpy(current->next->name,name); //名
}
void showProfile(StudentRecord *head){
	if(head==NULL) printf("NullPointerException!");
	StudentRecord *current=head->next;
	while(current!=NULL){
		printf("%s",current->name);
		printf("%c\n",current->gender);
		printf("%d\n",current->bdata);
		printf("%d,%d,%d",current->scores);
		current=current->next;
	}
}
