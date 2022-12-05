#include<iostream>
using namespace std;

int EuclidGCD(int num1,int num2){
	if (num2==0){
		//analyse message
		cout<<"num1=0, so return num1="<<num1<<endl;
		return num1;
	}
//recursive
	//analyse message
	cout<<"excute: EuclidGCD(num2,num1%num2)="
	<<"num2="<<num2<<", "<<"num1%num2="<<num1<<"%"<<num2<<"="<<num1%num2<<endl;
 return	EuclidGCD(num2,num1%num2);
	
}
int main(){
	int num1,num2;
	printf("\nEnter the first number: ");
        scanf("%d", &num1);
    printf("\nEnter the second number: ");
   	 	scanf("%d", &num2);
   	 	cout<<"----------------------------------"<<endl;
cout<<"The GCD of "<<num1<<" and "<<num2<<":"<<EuclidGCD(num1,num2)<<endl;
	
}
