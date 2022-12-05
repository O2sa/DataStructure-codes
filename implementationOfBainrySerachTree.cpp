#include<iostream>
#include <queue>
using namespace std;
struct BstNode{
	int data;
	BstNode* left;
	BstNode* right;
	
};


//make a new node
BstNode* GetNewNode(int data){
	BstNode* newNode=new BstNode();
	newNode->data=data;
	newNode->left=newNode->right=NULL;
	return newNode;
	
}

//insert a new node to the tree
BstNode* insert(BstNode* root, int data){
	if(root == NULL){
		root=GetNewNode(data);
		return root;
	}
	else if(data<=root->data){
		root->left=insert(root->left,data);
	}
	else{
		root->right=insert(root->right,data);

	}
	return root;
}



//serach about number in the tree
bool serach(BstNode* root, int data){
	if(root == NULL){
		
		return false;
	}
	else if(data==root->data){
        return true;
	}
	else if(data<=root->data){
	   return serach(root->left,data);
	}
	
	else{
		return serach(root->right,data);

	}

}


//find the minmum number in the tree
  int findMin(BstNode* root){
  	if(root==NULL){
  		cout<<"Error: the tree is empty\n";
  		return -1;
  		
	  }
	  while(root->left !=NULL)
	  root=root->left;
	  
	  return root->data;
  	
  }
  
  
  //find the maxmum number in the tree
  int findMax(BstNode* root){
  	if(root==NULL){
  		cout<<"Error: the tree is empty\n";
  		return -1;
  		
	  }
	  while(root->right !=NULL)
	  root=root->right;
	  
	  return root->data;
  	
  }
  
  //fun to find the height of tree
  int findHeight(BstNode* root){
  	if(root==NULL)
  	return -1;
  	return max(findHeight(root->left),findHeight(root->right)) +1;
  }
  
  
  //fun to travrsal tree by level order
  void levelOrder(BstNode *root){
  	   if (root==NULL)
  	   return;
  	   queue<BstNode*> q;
  	   q.push(root);
  	   while(!q.empty()){
  	   	BstNode* current=q.front();
  	   	cout<<current->data<<"  "<<endl;
  	   	if(current->left != NULL) q.push(current->left);
  	  	if(current->right != NULL) q.push(current->right);
  	  	q.pop();

		 }
  }
  
  
  
  bool IsSubTreeLesser(BstNode* root,int value){
  	  	if(root==NULL)
  	  	return true;
  	  	if(root->data<=value
  		&&IsSubTreeLesser(root->left,value)
  		&& IsSubTreeLesser(root->right,value))
  		return true;
  		else
  		return false;

  	
  }
  
   bool IsSubTreeGreater(BstNode* root,int value){
  	  	if(root==NULL)
  	  	return true;
  	  	if(root->data>value
  		&&IsSubTreeGreater(root->left,value)
  		&& IsSubTreeGreater(root->right,value))
  		return true;
  		else
  		return false;

  	
  }
  //Check if a given bainry tree in balance searsh tree
  bool IsBainrySearchTree(BstNode* root){
  	if(root==NULL)
  	  	return true;

  	if(IsSubTreeLesser(root->left,root->data)
  	&& IsSubTreeGreater(root->right,root->data)
  	&& IsBainrySearchTree(root->left)
  	&& IsBainrySearchTree(root->right))
  	return true;
  	else
  	return false;
  }
  
  
  //delete a node from  a bainrfy search tree 
  
  BstNode* deleteNode(BstNode* root,int value){
  	
  }
int  main()
{
	BstNode* root=NULL;
	root=insert(root,90);
	root=insert(root,80);
	root=insert(root,100);
	root=insert(root,105);
	root=insert(root,14);
	root=insert(root,60);
	root=insert(root,117);
	root=insert(root,122);
	root=insert(root,55);
	root=insert(root,95);
	root=insert(root,1);



	
	int num ;
	cout<<"enter a number to be serached\n";
	cin>>num;
	if(serach(root,num)==true) cout<<"found\n";
	else
	cout<<"not found\n";
	cout<<"the maxumm number"<<findMax(root)<<endl;
	cout<<"the minmum number"<<findMin(root)<<endl;
	cout<<"the height of the tree: "<<findHeight(root)<<endl;
    levelOrder(root);
     cout<<"Is Bainry Search Tree? "<<IsBainrySearchTree(root);
	


	
}
