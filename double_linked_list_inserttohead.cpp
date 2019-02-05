#include <stdlib.h>
#include <stdio.h>

struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;// global variable-pointer to the head of list

void InsertAtHead(int x){
	struct Node* newNode=(Node*)malloc(sizeof(struct Node));
	newNode->prev=NULL;
	newNode->data=x;
	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
		return;
	}
	head->prev=newNode;
	newNode->next=head;
	head=newNode;
}
void InsertAtTail(int x){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=x;
	newNode->next=NULL;
	newNode->prev=NULL;
	struct Node* temp=head;
	if(temp==NULL){
		head=newNode;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	newNode->prev=temp;
	temp->next=newNode;
}

void Print(){
	struct Node* temp=head;
	printf("Forward:");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void ReversePrint(){
	struct Node* temp=head;
	if(temp==NULL){
		return;//empty list
	}
	while(temp->next!=NULL){
		temp=temp->next;
	}
	printf("Reverse: ");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->prev;
	}
	printf("\n");
}

int main(){
	head=NULL;
	InsertAtHead(2);Print();ReversePrint();
	InsertAtTail(4);Print();ReversePrint();
	InsertAtTail(6);Print();ReversePrint();
}

