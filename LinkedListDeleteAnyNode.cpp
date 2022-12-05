//LinkedList delete node at position n
#include <stdlib.h>
#include <stdio.h>
struct Node{
	int data;
	Node* next; 
};
Node* head;  //global variable, can be access anywhere
void insert(int x){
	Node* temp=new Node();
	temp->data=x;
	temp->next=head;
	head=temp;
}

void print(){
	Node* temp=head;
	printf("list is: ");
	while(temp !=NULL){
		printf(" %d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void delet(int x){
	Node* temp1=head;


	for(int f=0;f<x-2;f++)
		temp1=temp1->next;
		//temp1 points to (n-1) node
		Node* temp2=temp1->next; //nth node
		temp1->next=temp2->next;//(n+1)th node
		delete temp2; //delete temp2 from memeory
}
int main() {
	head=NULL;  //empty list;
	insert(2); 
	insert(3); 
	insert(4); 
	insert(5);
	print(); //list is: 4 5 2 3
	int n;
	printf("enter the position \n");
	scanf("%d",&n);
	delet(n);
	print();

	
}
