#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct Profile Profile;
struct Profile{
	char name[30];
	char M;
	int b_year;
	int b_month;
	int b_day;
	float height;
	float weight;
	Profile* next;
};
FILE *inf;
void deleteNode(Profile *head);
int age(Profile* rec);
int max_heart_rate(Profile* rec);
int heart_rate_min(Profile* rec);
int heart_rate_max(Profile* rec);
float bmi(Profile* rec);
void add_node(Profile *head,char *name, char gender, int by, int bm, int bd, float h, float w);
int length(Profile* head);
Profile* add_tail(Profile* head, Profile* node);
void show_list(Profile* head);
Profile* get(Profile* head, int index);
int loadProfile(Profile* head,FILE *inf,char *fileName);
int main(){
	Profile *head=malloc(sizeof(Profile));
	head->next=NULL;
	if(loadProfile(head,inf,"plist.txt")==-1)return -1;
	show_list(head);
	
	

	deleteNode(head);
	fclose(inf);
}
int loadProfile(Profile* head,FILE *inf,char *fileName){
	inf=fopen(fileName,"r");
	if(inf==NULL) return -1;
	char name[30];
	char gender;
	int year=0;
	int month=0;
	int day=0;
	float Height;
	float Weight;
	while(!feof(inf)){
		fgets(name,30,inf);
		gender=(char)fgetc(inf);
		fscanf(inf,"\n%d %d %d\n",&year,&month,&day);
		fscanf(inf,"%f\n",&Height);
		fscanf(inf,"%f\n",&Weight);
		add_node(head,name,gender,year,month,day,Height,Weight);
	}
	
}
void add_node(Profile *head,char* name, char gender, int by, int bm, int bd, float h, float w){
	Profile *current=head;
	while(current->next!=NULL){
		current=current->next;
	}
	current->next=malloc(sizeof(Profile));
	current->next->next=NULL;
	strcpy(current->next->name,name);
	current->next->M=gender;
	current->next->b_year=by;
	current->next->b_month=bm;
	current->next->b_day=bd;
	current->next->weight=w;
	current->next->height=h;
}
void show_list(Profile *head){
	Profile *current=head->next;
	while(current!=NULL){
		printf("%s",current->name);
		printf("%c\n",current->M);
		printf("%d\n",current->b_year);
		printf("%d\n",current->b_month);
		printf("%d\n",current->b_day);
		printf("%f\n",current->height);
		printf("%f\n",current->weight);
		current=current->next;
	}
	return;
}
int age(Profile* rec){
	time_t rawtime;
	struct tm *info;
	time( &rawtime );
	info = localtime( &rawtime );
	return (info->tm_year+1900)-rec->b_year;
}
void deleteNode(Profile *head){
	Profile *tem=head->next;
	while(tem!=NULL){
		Profile *target=tem->next;
		free(tem);
		tem=target;
	}
	free(head);
}
