#include<stdio.h>

public Graph{
private:
	int numVertices;
	int adjMatrix[][];
	public:
	 Graph(int numVertices){
		this->numVertices=numVerrtices;
		adjMatrix[i]=new bool*[numVertices];
		for(int i=0;i<nmVertices;i++){
			adjMatrix[i]=new bool [numVertices];
			for(int j=0;j<numVertices;j++){
				adjMatrix[i][j]=false;
			}
		}
	}
	
	//add edges
	void addEdge(int i;int j){
		adjMatrix[i][j]=true;
		adjMatrix[j][i]=true;

	}
	
	//
  
  }
  
  






int main(){
	
	
	
}
