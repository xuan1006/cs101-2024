#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct tagStrudentRecord{
	char name[32];
	int gender;
	int bdate;
	int scores[3];
	struct tagStrudentRecord* next;
}StudentRecord;//串列裡要有我們要的型態，剛開始先想好 

StudentRecord* read_file(FILE* inf);//讀入檔案，以指標回傳，所以用StrudentRecord*  
StudentRecord* make_node(char* name,char gender,int yy,int mm,int dd,int sc1,int sc2,int sc3);
StudentRecord* add_tail(StudentRecord* head,StudentRecord* node);
int length(StudentRecord* head);
StudentRecord* get(StudentRecord* head, int index);
void show_list(StudentRecord* head);
int ind_by_name(StudentRecord* head, char* query);
int find_by_bdate(StudentRecord* head, int date, int start_index);


int main(){
	char* infname="term.txt";
	FILE* inf=fopen(infname,"rt");//開檔
	StudentRecord* head=read_file(inf);
	find_by_bdate(head,)
	fclose(inf);
	return 0;
}

StudentRecord* read_file(FILE* inf){//讀所有檔案，將讀到的回傳 
	char name[32];
	char gender=0;
	int  yy=0,mm=0,dd=0;
	int sc1=0,sc2=0,sc3=0;
	StudentRecord* node=NULL;
	StudentRecord* head=NULL;
	
	while(!feof(inf)){
		fgets(name,32,inf);//讀名字，有空白，用S 
		fscanf(inf,"%c\n",&gender);//讀信性別 
		fscanf(inf,"%d %d %d\n",&yy,&mm,&dd);//讀生日
		fscanf(inf,"%d %d %d\n",&sc1,&sc2,&sc3);//讀成績 
		node=make_node(name,gender,yy,mm,dd,sc1,sc2,sc3);//資料傳到函式
		head=add_tail(head,node);//資料傳到函式
	}
	show_list(head);
	return head;
} 

StudentRecord* make_node(char* name,char gender,int yy,int mm,int dd,int sc1,int sc2,int sc3){
	StudentRecord* node=NULL;
	
	node = (StudentRecord*)malloc(sizeof(StudentRecord));
	strcpy(node->name,name);
	if(gender=='M')
		node->gender=1;//性別要回傳數字 
	else if(gender=='F')
		node->gender=0;
	else
		node->gender=0;
	node->bdate=yy*10000+mm*100+dd;//生日變8碼 
	node->scores[0]= sc1; 
	node->scores[1]= sc2;
	node->scores[2]= sc3;//成績放到陣列
	node->next=NULL;
	return node;	 
}
StudentRecord* add_tail(StudentRecord* head,StudentRecord* node){
    StudentRecord* current=NULL;
    if (node == NULL)
        return head;
    if (head == NULL) {
        head = node;
        return head;//防呆
    }
    // find tail
    current = head;    // head!=NULL
    while (current->next != NULL) {
         current = current->next;//把指標指到最後一個
    }
    // current is tail
    current->next= node;//資料放到串列

    return head;
}
int length(StudentRecord* head) {
    int count=0;
    StudentRecord* current=NULL;

    // from head to the end of list
    current = head;
    while (current != NULL) {
        count++;
        current = current->next;//算長度
    }
    return count;
}
StudentRecord* get(StudentRecord* head, int index) {
    StudentRecord* current=head;
    int i=0;

    if (head==NULL)
        return NULL;
    if (index>=length(head))
        return NULL;
    for (i=0; i<index; i++)
        current = current->next;
    return current;
}
void show_list(StudentRecord* head){
	int len=0 ,i=0,j=0;
	float avg=0;
	StudentRecord* node=NULL;
	
	if(head==NULL)
		return;
	len= length(head);
	for(i=0;i<len;i++){
		avg=0;
		node=get(head,i);
		printf("%s ",node->name);
		if(node->gender==1)//判斷男女
			printf("男\n");
		else if(node->gender==0)
			printf("女\n");
		else printf("?\n");
		printf("%d\n",node->bdate);
		for(j=0;j<3;j++){
			avg+=(node->scores[j]);//算平均
		}
		avg/=3.000;
		printf("%f\n",avg);
	}
}
int ind_by_name(StudentRecord* head, char* query){
	int i=0;
	StudentRecord* node=NULL;
	
	if(head==NULL)
		return -999;//防呆
	int len = length(head);
	for(i=0;i<len;i++){
		node = get(head,i);//找到串列的資料
		if (strstr(node->name, query)!=NULL)//找到串列的資料
            return i;
	}
	return -1;
}
int find_by_bdate(StudentRecord* head, int date, int start_index){
	int i=0;
	StudentRecord* node=NULL;
	
	if(head==NULL)
		return -999;
	int len = length(head);
	if(start_index<0||start_index>=len)
		return -1;//找到串列的資料
	for(i=start_index;i<len;i++){
		node = get(head,i);//找到串列的資料
		if (date<node->bdate)
            return i;
	}
	return -1;
}
