#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// structure to hold binary tree node
struct Node
{
    int data;
    Node *left, *right;

    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

Node* get_sibling(Node *node, int key) 
{
    if (node == NULL || node->data == key) 
    {
      return NULL;
    }

    if (node->left != NULL && node->left->data == key) 
    {
      return node->right;
    }
    
    if (node->right != NULL && node->right->data == key) 
    {
      return node->left;
    }

    Node *temp = get_sibling(node->left, key);

    if (temp != NULL) 
    {
      return temp;
    }

    temp = get_sibling(node->right, key);
    return temp;
}

 void findParent(Node *node,
                         int val, int parent)
{
    if (node == NULL)
        return;
 
    // If current node is the required node
    if (node->data == val)
    {
 
        // Print its parent
cout<<parent;    }
    else
    {
 
        // Recursive calls for the children
        // of the current node
        // Current node is now the new parent
        findParent(node->left, val, node->data);
        findParent(node->right, val, node->data);
    }
}

int main()  
{  
    Node* root = NULL;
    /* Binary tree:
              16
            /   \
           /     \
          10      25
         /  \    /  \
        /    \  /    \
       7    15 18     30

    */

    root = new Node(16);
    root->left = new Node(10);
    root->right = new Node(25);
    root->left->left = new Node(7);
    root->left->right = new Node(15);
    root->right->left = new Node(18);
    root->right->right = new Node(30);

    int child = 7;
    Node *sibling = get_sibling(root, child);

    if (sibling != NULL)
    {
        cout<<"The sibling of "<<child<<" is " << sibling->data<<endl;
    } else {
        cout<< child<<" does not have any sibling"<<endl;
    }
        findParent(root, child, -1);


    return 0;  
    
    
}
