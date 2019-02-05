#include<stdio.h>
#include<stdlib.h>

#define MaxSize 10

int Queue[MaxSize];
int front, rear;

bool isEmpty(){
	if(front==-1&&rear==-1) return true;
	else return false;
}

bool isFull(){
	if((rear+1)%MaxSize==front) return true;  //circular array
	else return false;
}

void enQueue(int x){
	if(isEmpty()){
		rear=front=0;
	}
	else if(isFull()){
		printf("Error:the queue is full, can not be enqueued any more!\n");
		return;
	}
	else{
		rear=(rear+1)%MaxSize;
	}
	Queue[rear]=x;
}

void deQueue(){
	if(isEmpty()){
		printf("Error: the queue is empty, can not be dequeued any more!\n");
		return;
	}
	else if(front==rear){
		front=rear=-1;
	}
	else{
		front=(front+1)%MaxSize;
	}
}


void Print(){
	int len=(rear+MaxSize-front)%MaxSize+1;
	if(isEmpty()){
		printf("Error: the queue is empty!");
		return;
	}
	for(int i=0; i<len; i++){
		printf("%d ", Queue[(front+i)%MaxSize]);
	}
	printf("\n");
}
int main(){
	front=rear=-1;//initialize the queue with empty
	enQueue(2); Print();
	enQueue(4); Print();
	enQueue(5); Print();
	deQueue();Print();
	enQueue(10);Print();
	enQueue(23);Print();
	enQueue(15);Print();
	enQueue(8);Print();
	enQueue(7);Print();
	enQueue(1);Print();
	enQueue(5);Print();
	enQueue(9);Print();
	enQueue(12);Print();
	deQueue();Print();
	enQueue(12);Print();
	return 0;
} 
