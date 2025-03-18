#include <stdio.h>
#include <stdlib.h>
typedef struct node Node;
struct node{
	int data;
	Node *next;
};
void add_Node(Node* head);
void Showlist(Node* head);
Node* Del_Node(Node* head);
int main(){
	Node* head=(Node*)malloc(sizeof(Node));
	head->next=NULL;
	int i;
	
	while(i!=0){
		printf("是否新增:");
		scanf("%d",&i);
		if(i==1){
			add_Node(head);
		}
		if(i==2){
			Showlist(head);
		}
		if(i==3){
			head=Del_Node(head);
		}
	}
	
}
void add_Node(Node* head){
	int data;
	printf("輸入要新增的值:");
	scanf("%d",&data);
	Node* curent = head;
	while(curent->next!=NULL){
		curent=curent->next;
	}
	curent->next=(Node*)malloc(sizeof(Node));
	curent->next->data=data;
	curent->next->next=NULL;
	return;
}
void Showlist(Node* head){
	Node* curent = head->next;
	while(curent!=NULL){
		printf("%d\n",curent->data);
		curent=curent->next;
	}
	return;
}
Node* Del_Node(Node* head){
	Node* temp=head;
	head=head->next;
	free(temp);
	return head;
}
