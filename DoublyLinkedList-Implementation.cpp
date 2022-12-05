//DoublyLinkedList-Implementation.cpp#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
struct Node{
	int data;
	Node* next; 
	Node* prev;
};
Node* head=NULL;  //global variable - pointer to head node


//Mothed to insert in the begin of list
void insertHead(int data){
	Node* temp=new Node();
	temp->data=data;
	temp->next=NULL;
	temp->prev=NULL;
	
	if(head == NULL) head=temp;
	else{
		Node *temp1=head;
		temp->next=temp1;
		temp1->prev=temp;
	}
	head=temp;	
	
}
	void insertTail(int data){
		Node* temp=new Node();
		temp->data=data;
	temp->next=NULL;
	temp->prev=NULL;
		if(head == NULL) head=temp;
	else{
		
		Node *temp1=head;
		while(true){
			temp1=temp1->next;
			if(temp1->next= NULL){
					temp1->next=temp;
					temp->prev=temp1;
					break;
			}
			
			
		}
	
	
	}
		
	}

void print(){
	while(head != NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}


int main() {
insertTail(2);
insertTail(4);
insertTail(6);


print();




	
}
