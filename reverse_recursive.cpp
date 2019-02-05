#include<stdlib.h>
#include<stdio.h>

struct Node{
	int data;
	struct Node* next;
};
//struct Node* head; //head is global variable 
struct Node* Reverse(struct Node* p){
	struct Node* Head=NULL;
	if(p->next==NULL){
//		head=p;  head is global variable
	    Head=p;
		return Head;  //return pointer to the last node 
	}
	Head=Reverse(p->next);//recursively return wanted value;
	struct Node* q=p->next;
	q->next=p;
	//p->next->next=p;
	p->next=NULL;
	return Head;  //recursively return wanted value;
}
//insert node at the end of the linked list
struct Node* Insert(struct Node* Head, int data){
	struct Node* newNode=(Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	if(Head==NULL) {
		Head=newNode;
		return Head;
	}
	struct Node* temp=Head;
	while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    return Head;
}
void Print(struct Node* p){
	printf("the list is:");
	while(p!=NULL){
		printf("%d ", p->data);
		p=p->next;
	}
	printf("\n");
}
int main(){
	struct Node* head=NULL;
	head=Insert(head,2);
	head=Insert(head,6);
	head=Insert(head,5);
	head=Insert(head,4);
	Print(head);
	head=Reverse(head);
	Print(head);
}
