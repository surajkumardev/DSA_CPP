// Think about Day 60 the day when you have completed the most important part 
//so keep learing the most important ones 
// Day 2 --tree basics -> 15-09-27
#include <iostream>
#include <vector>
#include<queue> 
using namespace std;
/*
    |Time Complexity  | Best | Worst
    | Build           | O(n) | O(n)
    | Traversal       | O(n) | O(n)
    | Search          | O(n) | O(n)
    | Insert          | O(n) | O(n)
    | Delete          | O(n) | O(n)
    | Height          | O(n) | O(n)
*///Worst Case -> Skweed Bianry Tree
/*  General Binary Tree -> Skwed Biary Tree left, right  Worst Case
    Time Complexity | Best Case | Worst Case 
    PreOrder        | O(n)      | O(n)
    PostOrder       | O(n)      | O(n)
    InOrder         | O(n)      | O(n)
    LevelOrder      | O(n)      | O(n)
*/

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node(int value) {
            data = value;
            left = NULL;
            right = NULL;
        }
};
//RECURSIVE NODE CREATION
Node* BinaryTree(){
    int x;
    cin>>x; 
    if(x==-1) return NULL; 
    Node* temp=new Node(x); 
    //left side create 
    cout<<"Enter the left child of "<<x<<" :";
    temp->left=BinaryTree();

    //rigth side 
    cout<<"Enter the right child of "<<x<<" ";
    temp->right=BinaryTree();
    return temp;
}
//Traversal Techniques
//1. PreOrder Traversal 
void Preorder(Node* root){ //root, left , right, hamesa left -> right jana hai
    if(root==NULL) return; 
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

//2. Post Order Traversal 
void PostOrder(Node* root){ //left->right->root
    if(root==NULL) return; 
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}


//3. InOrder Traversal 
void InOrder(Node* root){ //left->root->right
    if(root==NULL) return; 
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

//4. Level Order Traversal 
void LevelOrder(Node* root){ //Level Wise Using Queue Data Structure 
    queue<Node*> q; 
    q.push(root); 
    while(!q.empty()){
        Node* temp=q.front(); 
        q.pop(); 
        cout<<temp->data<<" ";
        if(temp->left) q.push(temp->left); //left hai to push karo q mai
        if(temp->right) q.push(temp->right); //right hai to push karo q mai
    }
}

    
int main() {
    //  cout<<"Enter the root Node: "; 
    //  Node *root=BinaryTree();



    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    
        
        /*
                        10
                      /   \
                    20    30
                    / \   / \
                   -1  -1 -1  -1
        */
        //call each of the traversal functions 
        cout<<"PreOrder Traversal: ";
        Preorder(root);
        cout<<endl;
        cout<<"PostOrder Traversal: ";
        PostOrder(root);
        cout<<endl;
        cout<<"InOrder Traversal: ";
        InOrder(root);
        cout<<endl;
        LevelOrder(root);
    
        return 0;
    }
    