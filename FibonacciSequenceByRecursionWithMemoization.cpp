#include<iostream>
#include<cstdio>
using namespace std;
double F[100];
double Fib(int n){
	if(F[n]!=-1.0)
	{
		return F[n];
	}
	
	
	F[n]=Fib(n-1) + Fib(n-2);
	return F[n];
}

int main(){
	for(int f=0;f<100;f++){
		F[f]=-1.0;
	}
	F[0]=0;F[1]=1;
	int num;
	cout<<"Give me an postive number: "<<endl;
	cin>>num;
	cout<<"-------------------------------------"<<endl;
	cout<<"The Fibonacci Sequence of "<<num<<": "<<Fib(num)<<endl;
	cout<<
	sizeof(int);
}






