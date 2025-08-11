#include<iostream>
using namespace std; 
struct Node{
    int data; 
    Node* left ;
    Node* right; 
    Node(int value){
        data=value;
        left=right=NULL; 
    }
};
Node* createTree(){
    int val;
    cout<<"Enter value (-1 for no node):"<<endl;
    cin>>val;

    if(val==-1){
        return NULL;
    }
    Node* newNode=new Node(val); //create a node;

    cout<<"enter left child of "<<val<<endl;
    newNode->left=createTree(); //recursive call

    cout<<"enter right child of"<<val<<endl;
    newNode->right=createTree(); //recursive call

    return newNode;
}
void inorderTraversal(Node* root){
    if(root==NULL) return ;
    inorderTraversal(root->left);
    cout<<root->data<<" "<<endl;
    inorderTraversal(root->right);
}

void printTree(Node* root, int space = 0, int height = 5) {
    if (root == NULL) return;

    // Increase distance between levels
    space += height;

    // Print right child first
    printTree(root->right, space);

    // Print current node after spaces
    cout << endl;
    for (int i = height; i < space; i++) cout << " ";
    cout << root->data << "\n";

    // Print left child
    printTree(root->left, space);
}



int main(){
    // //creating the tree  manually 
    // Node* root=new Node(1);
    // //add children 
    // root->left=new Node(2);
    // root->right=new Node(3);

    // //add more
    // root->left->left=new Node(4);
    // root->left->right=new Node(5);

    // //basic 
    // cout<<"root: "<<root->data<<endl;
    // cout<<"left child "<<root->left->data<<endl;
    // cout<<"right child"<<root->right->data<<endl;
    // cout<<"right child"<<root->right->right->data<<endl;
    // cout<<"right child"<<root->right->data<<endl;
    Node* root=createTree();
    inorderTraversal(root);

    printTree(root);


    return 0;
}