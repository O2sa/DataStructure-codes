//LinkedList delete node at position n
#include <stdlib.h>
#include <stdio.h>
struct Node{
	int data;
	Node* next; 
};


// mothod to print of list by reucvison
void Print(Node* p){
	if(p==NULL)//exit condition
	{
		return;
	}
	printf("%d ",p->data); //first print the value in the node
	Print(p->next); // recursive call
}



// mothod to print the reverse of list by reucvison
void PrintReverse(Node* p){
	if(p==NULL)//exit condition
	{
		return;
	}
	
	PrintReverse(p->next);

	printf("%d ",p->data); 
		printf(",");

}
Node* insert(Node* head,int data){
	Node* temp=new Node();
	temp->data=data;
	temp->next=NULL;
	if(head==NULL) head=temp;
	else
	{
		Node* temp1=head;
		while(temp1->next != NULL) temp1=temp1->next;
		temp1->next=temp;
	}

return head;
}
int main() {
Node* head=NULL;  //local variable 
head=insert(head,2);
head=insert(head,6);
head=insert(head,5);
head=insert(head,4);
PrintReverse(head);



	
}
