#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;


void BubbleSort(int A[],int lng){
	for(int i=0;i<lng-1;i++){
		bool isSorted=true;
			for(int s=0;s<lng-i-1;s++){
				if (A[s]>A[s+1]){
					int temp=A[s];
					A[s]=A[s+1];
					A[s+1]=temp;
					isSorted=false;
					
				}
				
			}
			if(isSorted)
			break;
	}
	//return A[];
}


int main(){
	int A[]={7,4,2,3,1,1,5,2,6};
	int length=(sizeof(A)/sizeof(*A));
	BubbleSort(A,length);
	int i=0;
	while(i<length){
		cout<<A[i]<<endl;
		i++;
	}
}
