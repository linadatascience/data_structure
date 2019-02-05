#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
//struct Node* Head;
struct Node* Reverse(struct Node* head){
	struct Node* current, *prev, *next;
	prev=NULL;
	current=head;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	return head;
	}
	//insert node at the end of list
	struct Node* Insert(struct Node* Head, int data){
		struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
		newNode->data=data;
		newNode->next=NULL;
		struct Node *temp=Head;
		if(Head==NULL){
			Head=newNode;
			return Head;
		}
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=newNode;
		return Head;
	}
	
	void Print(struct Node* head){
	//	struct Node* temp=head;
		printf("the list is:");
		while(head!=NULL){
			printf("%d ",head->data);
			head=head->next;
		}
	}
	int main(){
		struct Node* head=NULL;//local variable
		head=Insert(head,2);
		head=Insert(head,4);
		head=Insert(head,6);
		head=Insert(head,8);
		Print(head);
		head=Reverse(head);
		Print(head);
	}
