#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
struct Node* Head;
void Insert(int data){   //insert a node at the end of the list
    struct Node* temp1=(Node*)malloc(sizeof(struct Node));
    temp1->next=NULL;
    temp1->data=data;
    if(Head==NULL){
    	Head=temp1;
    	return;
    }
    struct Node* temp2=Head;
    while(temp2->next!=NULL)
    	temp2=temp2->next;   //tranvers to last node
    temp2->next=temp1;    //put the new node to the end of linked list
    return;
}
void Print(){    //print all of the elements in the list
    struct Node* temp=Head;
    printf("the list is:");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}  
    printf("\n");
    return;
}
void Delete(int n){   //delete the node at position of n
    struct Node* temp=Head;
    if(n==1){
    	Head=temp->next;
    	free(temp);
    	return;
    }
    for(int i=0;i<n-2;i++)
    	temp=temp->next;//temp points to (n-1)th node
    struct Node* temp1=temp->next; //temp1 points to nth node
    temp->next=temp1->next;//(n-1)th node linked to (n+1)th node
    free(temp1);//delete the memory taken by nth node
}
int main(){
	Head=NULL;  //empty list
	Insert(2);
	Insert(4);
	Insert(5);
	Insert(6);
	Print();
	int n;
	printf("input the position of node to be deleted:");
	scanf("%d",&n);
	Delete(n);
	Print();
}
