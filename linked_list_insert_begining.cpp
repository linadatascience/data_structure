#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
struct Node* Head;
void Insert(int x){
	Node* temp=(Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=NULL;
	temp->next=Head;
	Head=temp;
}
void Print(){
	struct Node* pointer1;
	pointer1=Head;
	printf("the list is:\n");
	while(pointer1!=NULL){
		printf("%d ",pointer1->data);
		pointer1=pointer1->next;
	}
    printf("\n");
}
int main(){
	Head=NULL;
	printf("How many numbers?\n");
	int n,i,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the number:");
	   	scanf("%d",&x);
	   	Insert(x);
	   	Print();
	}
	
	
}
