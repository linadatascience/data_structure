#include<stdlib.h>
#include<stdio.h>

struct BstNode{
	int data;
	struct BstNode* right;
	struct BstNode* left;
};

struct BstNode* GetNewNode(int data){
	struct BstNode* newNode=(struct BstNode*)malloc(sizeof(struct BstNode));
	newNode->data=data;
	newNode->right=newNode->left=NULL;
	return newNode;
}

struct BstNode* Insert(struct BstNode* root, int data){
	if(root==NULL){
		root=GetNewNode(data);
	//	return root;
	}
	else if(data<=root->data){
		root->left=Insert(root->left,data);
	}
	else {
		root->right=Insert(root->right, data);
	}
	return root;	
}

bool Search(struct BstNode* root, int data){
	if(root==NULL) return false;
	else if(data>root->data) Search(root->right, data);
	else if(data<root->data) Search(root->left,data);
	else return true;
}

int main(){
	struct BstNode* rootPtr;
	rootPtr=NULL;//initialize the tree to be empty
	rootPtr=Insert(rootPtr, 15);
	rootPtr=Insert(rootPtr, 10);
	rootPtr=Insert(rootPtr, 20);
	rootPtr=Insert(rootPtr, 8);
	rootPtr=Insert(rootPtr, 12);
	rootPtr=Insert(rootPtr, 17);
	rootPtr=Insert(rootPtr, 25);
	int test;
	printf("Please enter the number to be searched:\n");
	scanf("%d",&test);
	if(Search(rootPtr, test)==true) printf("the data is found\n");
	else printf("the data is not found!\n");
}
