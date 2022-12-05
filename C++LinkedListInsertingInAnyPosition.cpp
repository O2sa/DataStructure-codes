//LinkedList inserting in any giving position
#include <stdlib.h>
#include <stdio.h>
struct Node{
	int data;
	Node* next; 
};
Node* head;  //global variable, can be access anywhere
void insert(int data,int x){
	Node* temp1=new Node();
	temp1->data=data;
	temp1->next=NULL;
	if(x==1){
		temp1->next=head;
		head=temp1;
		return;
	}
	Node* temp2=head;
	for(int f=0;f<x-2;f++){
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
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
int main() {
	head=NULL;  //empty list;
	insert(2,1); //list is: 2
	insert(3,2); //list is: 2 3
	insert(4,1); //list is: 4 2 3
	insert(5,2); //list is: 4 5 2 3
	print();

	
}
