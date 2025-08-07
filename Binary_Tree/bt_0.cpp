//Levell order Traversal of a binary Tree
#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<queue>

using namespace std; 
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};
vector<vector<int>> levelOrder(node* root){
    vector<vector<int>> ans;  //result 
    if(root==NULL){
        return; 
    }
    queue<node*> q;
    q.push(root);
    while(q.empty()){
    int size=q.size();
        vector<int> level; 
        for(int i=0;i<size;i++){
            node* node=q.front();
            q.pop();
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
            ans.push_back(level);
        }
    }
    return ans;


}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);



    return 0; 
}