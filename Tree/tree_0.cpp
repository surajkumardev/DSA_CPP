#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std; 

//Node
struct node{
    int data;
    node* left; 
    node* right; 
    node(int val){
        data=val;
        left=right=NULL;
    }   
};

int main(){
    // struct node root=new node(1);
    // root->left=new node(2);
    // root->right=new node(3);
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);


    return 0;
}