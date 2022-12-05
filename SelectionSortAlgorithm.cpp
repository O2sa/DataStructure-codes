#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;


void SelectionSort(int A[],int lng){
	for(int i=0;i<lng-2;i++){
			int iMin=i;
			for(int s=i+1;s<lng;s++){
				if (A[iMin]>A[s]){
					iMin=s;
				}
				
			}
			if(iMin==i)
			continue;
			int temp=A[i];
			A[i]=A[iMin];
			A[iMin]=temp;
			
		
	}
	//return A[];
}


int main(){
	int A[]={6,4,2,3,1,1,5,2,7};
	int length=(sizeof(A)/sizeof(*A));
	SelectionSort(A,length);
	int i=0;
	while(i<length){
		cout<<A[i]<<endl;
		i++;
	}
}
