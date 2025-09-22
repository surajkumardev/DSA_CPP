// Day 60 the day when you have completed the most important part so keep learing the most important one 
// Day 1 --tree basics -> 14-09-27

//Creating the structure of the tree 
#include <iostream>
#include <vector>
#include<queue> 
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int main() {
    // Node* root = new Node(10);
    // root->left = new Node(20);
    // root->right = new Node(30);
    // root->left->left = new Node(40);
    // root->left->right = new Node(50);
    // root->right->left = new Node(60);
    // root->right->right = new Node(70);

   
    // cout << "Root: " << root->data << endl;
    // cout << "Left Child of Root: " << root->left->data << endl;
    // cout << "Right Child of Root: " << root->right->data << endl;
    // cout << "Left Child of Left Child of Root: " <<   root->left->left->data << endl;
    // cout << "Right Child of Left Child of Root: " <<   root->left->right->data << endl;
    // cout << "Left Child of Right Child of Root: " << root->right->left->data << endl;
    // cout << "Right Child of Right Child of Root: " << root->right->right->data << endl;



    //Level Order  of tree data structure 
    int x; 
    cout<<"Enter the root value: "<<endl;
    cin>>x; 
    int first, second; 
    queue<Node*> q; 
    Node* root=new Node(x);
    q.push(root); 

    //build 
    while(!q.empty()){
        Node* temp=q.front(); 
        q.pop(); 

        cout<<"Enter the left child of "<<temp->data<<" :";
        cin>>first; 
     //left 
     if(first!=-1){
        temp->left=new Node(first);
        q.push(temp->left);
     }

     //right
     cout<<"Enter the right child of "<<temp->data<<" :";
     cin>>second;
     if(second!=-1){
        temp->right=new Node(second);
        q.push(temp->right);
     }   
    }


    
    /*
                    10
                  /   \
                20    30
                / \   / \
               -1  -1 -1  -1
    */

                
        

    
    return 0;
}
