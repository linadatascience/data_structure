#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
struct Node* Head;
void Insert(int data, int n){
	struct Node* tempNode=(Node*)malloc(sizeof(struct Node));
	tempNode->data=data;
	tempNode->next=NULL;
//	struct Node* tempPointer=Head;
	if(n==1){
		tempNode->next=Head;
		Head=tempNode;
		return;
	}
	struct Node* tempPointer=Head;
	for(int i=0; i<n-2;i++){
	    tempPointer=tempPointer->next;
    }
    tempNode->next=tempPointer->next;
    tempPointer->next=tempNode;  
    return;	
}
void Print(){
	struct Node* temp=Head;
	printf("the list is:\n");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main(){
	Head=NULL;
	Insert(2,1);
	Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    Print();
};
