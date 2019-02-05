#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
//struct Node* Head;
void Insert(Node** pointerToHead, int x){
	Node* temp=(Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=NULL;
	temp->next=*pointerToHead;
	*pointerToHead=temp;
//	return head;
}
void Print(struct Node* head){
//	struct Node* temp;
//	temp=head;
	printf("the list is:\n");
	while(head!=NULL){
		printf("%d ",head->data);
		head=head->next;
	}
    printf("\n");
}
int main(){
	struct Node* Head=NULL;
	printf("How many numbers?\n");
	int n,i,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the number:");
	   	scanf("%d",&x);
	   	Insert(&Head,x);
	   	Print(Head);
	}
	
	
}
