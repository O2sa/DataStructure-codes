#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;


void InsertionSort(int A[],int lng){
	for(int i=1;i<lng;i++){
		int value=A[i];
		int hole=i;
		while(hole>0&&A[hole-1]>value){
			A[hole]=A[hole-1];
			hole=hole-1;
		}
		A[hole]=value;
	}

}


int main(){
	int A[]={7,4,2,3,1,1,5,2,6};
	int length=(sizeof(A)/sizeof(*A));
	InsertionSort(A,length);
	int i=0;
	while(i<length){
		cout<<A[i]<<endl;
		i++;
	}
}
