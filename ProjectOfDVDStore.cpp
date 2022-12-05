#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

//data of a DVD as a struct
struct DVD{
	string name;
	int id;
	int copies;
	DVD* next;
};
DVD* head;
void insert(string name,int id,int copies){
	DVD* temp=new DVD();
	temp->name=name;
	temp->id=id;
	temp->copies=copies;
	temp->next=head;
	head=temp;

}

void printDVD(){
		DVD* temp=head;
	printf("list of DVDs in the store: ");
	printf("\n");
	int d=0;
	while(temp !=NULL){
		d++;
		printf("\n");
		cout<<"--------------------------------------------------"<<endl;
		cout<<"the "<<d<<" DVD"<<endl;
		printf("\n");
		cout<<"name of DVD: ";
		cout<<temp->name;
		printf("\n");

		cout<<"ID of DVD: ";
		printf(" %d",temp->id);
		printf("\n");

		cout<<"the number of copies: ";
		printf(" %d",temp->copies);
		
		temp=temp->next;
	}
	printf("\n");
}
int checkCopies(int DVDId){
	DVD* temp=head;
		while(temp !=NULL){
		if(temp->id==DVDId){
		    return temp->id;
		}
		temp=temp->next;
	}
	
	
}

//dvd end

//start customer



struct cust{
	string name;
	int id;
    DVD* rentedDVD;
	cust* next;
	
};

cust* custHead;
void addCust(string name,int id){
		cust* temp=new cust();
	temp->name=name;
	temp->id=id;
	temp->next=custHead;
	custHead=temp;
	
}

void printCust(){
		cust* temp=custHead;
			cout<<"--------------------------------------------------"<<endl;

	printf("list of customers in the store: ");
	printf("\n");
	int d=0;
	while(temp !=NULL){
		d++;
		printf("\n");
		cout<<"the "<<d<<" customer"<<endl;
		printf("\n");
		cout<<"name of customer: ";
		cout<<temp->name;
		printf("\n");

		cout<<"ID of customer: ";
		printf(" %d",temp->id);
		printf("\n");

		int d=0;
		for(int s=0;s<10;s++){
			if(temp->rentDVD[s]>0){
				cout<<"the "<<s+1<<" rented DVD is:"<<temp->rentDVD[s]<<endl;
				d=d+1;
			}
		}
				cout<<"the number of rented DVDs: "<<d<<endl;

		temp=temp->next;
	}
	printf("\n");
}

	void rentDVD(int custId,int DVDId){
			cust* temp=custHead;
			DVD* temp2=temp->rentedDVD;
	
	while(temp !=NULL){
		if(temp->id==custId){
		while(temp2->next==NULL)
			
		}
		
		temp=temp->next;
	}
	}

int main() {
    insert("The king",1,5);
    insert("The superman",2,5);
    insert("Culture of Yemen",3,11);
    insert("The west world",3,2);
    printDVD();
     
     
     //add customers
     addCust("ahmed",1);
     addCust("ali",2);
     addCust("saleh",3);
     addCust("sami",4);
     addCust("bassam",5);
     
     rentDVD(1,2);
     rentDVD(2,5);
     rentDVD(5,1);
     rentDVD(3,2);
     printCust();

     

     


	
}
