#include<iostream>
#include<cstdio>
using namespace std;

int Factorial(int num)
{
	//analyse message
	cout<<"I am calculating Factrial of: "<<num<<endl;
	
	if(num==0)
	return 1;
	
	int fac=num*Factorial(num-1);
	
	//analyse message
	cout<<"Done calculating Factrial of: "<<num<<endl;
	
	return fac;
}
int main(){
	int num;
	cout<<"Give me an postive number: "<<endl;
	cin>>num;
	cout<<"-------------------------------------"<<endl;
	cout<<"The Factorial of "<<num<<": "<<Factorial(num)<<endl;
}

