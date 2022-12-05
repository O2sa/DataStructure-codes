
//LinkedList inserting in any giving position
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


//delete any node in singly list
void delete(node* head,int x){
	Node* temp1=head;


	for(int f=0;f<x-2;f++)
		temp1=temp1->next;
		//temp1 points to (n-1) node
		Node* temp2=temp1->next; //nth node
		temp1->next=temp2->next;//(n+1)th node
		delete temp2; //delete temp2 from memeory
}
