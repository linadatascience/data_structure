#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
struct Node* top=NULL;

void Push(int x){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=x;
//	new->next=NULL;
	newNode->next=top;
	top=newNode;
}
void Pop(){
	struct Node* temp;
	if(top==NULL) return;
	temp=top;
	top=temp->next;
	free(temp);
}

struct Node* Top(){
	return top;
}

bool IsEmpty(){
	if(top==NULL)return true;
	else return false;
}

void Print(){
	struct Node* p=top;
	if(top==NULL) printf("stack is empty\n");
	printf("Stack:\n");
	while(p!=NULL){
		printf("%d ", p->data);
		p=p->next;
	}
	printf("\n");
}

int main(){
	Push(2); Print();
	Push(5);  Print();
	Push(10);Print();
	Pop();Print();
}
