#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top=-1; //initialize the position of top of stack in the array

void Push(int x){
	if(top==MAX_SIZE-1){
		printf("error: stack overflow\n");
		return;
	}
	//top++;
	A[++top]=x;
}
void Pop(){
	if(top==-1){
		printf("error: stack is empty\n");
		return;
	}
	top--;
}
int Top(){
	return A[top];
}

void Print(){
	int i;
	printf("stack:\n");
	for(i=0;i<=top;i++)	printf("%d ", A[i]);
	printf("\n");
}
int main(){
	Push(2); Print();
	Push(5); Print();
	Push(10); Print();
	Pop(); Print();
	Push(12);Print();	
}
