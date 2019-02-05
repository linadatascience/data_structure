//print the linked list using Recursion

#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
void Print(struct Node* head){
	if(head==NULL) return;    //Exit condition
	printf("%d ",head->data);//first print the value of node
	//head=head->next;
	//Print(head); \\recursive call
	Print(head->next);//recursive call
}
struct Node* Insert(struct Node* head, int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	struct Node* temp=head;
	if(head==NULL) {
		head=newNode;
		return head;
	}
	else{
		while(temp->next!=NULL)
		     temp=temp->next;
		temp->next=newNode;
		return head;
	}
}

void ReversePrint(struct Node* head){
	if(head==NULL) return;
	ReversePrint(head->next);
	printf("%d ",head->data);
}

int main(){
	struct Node* head=NULL;
	head=Insert(head,2);
	head=Insert(head,6);
	head=Insert(head,5);
	head=Insert(head,4);
	Print(head);//print Linked list in forward order
	ReversePrint(head); //print the Linked List in reverser order
}
