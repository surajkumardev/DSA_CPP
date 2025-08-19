//creating a binary tree 
//using the preorder array
//do the pre order, post order , and in order traversal 
// do the inorder itterative 
//do the inorder on the level wise 
//like the sum of value at a particular level using NULL 

#include<iostream>
#include<vector> 
#include<queue>
using namespace std; 

//basic node structure 
class Node{
    public: 
    int data; 
    Node* left; 
    Node* right; 
    Node(int val){
        data=val; 
        left=right=NULL;
    }
};

//build tree using recursive preorder 

static int idx=-1; ///-1-> 0-> 1-> 2
Node* buildTree(vector<int> preorder){
    idx++; 

    if(preorder[idx]==-1){ //check for the -1 if -1 return NULL don't check for nULL Value
        return NULL; 
    }
    Node* root=new Node(preorder[idx]);

    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
    return root; 
}



//pre
void preorderTraversal(Node* root){
    if(root==NULL){
        return; 
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postTraversal(Node* root){
    if(root==NULL){
        return; 
    }
    postTraversal(root->left);
    postTraversal(root->right);
    cout<<root->data<<" ";
}
void inOrderTravesal(Node* root){
    if(root==NULL){
        return; 
    }
    inOrderTravesal(root->left);
    cout<<root->data<<" ";
    inOrderTravesal(root->right);
}

//level using iterative
///use the queue data structure 
void levelOrder(Node* root){
    // if(root==NULL){
    //     return ; 
    // }
    queue<Node*> q; 
    q.push(root); 
    while(q.size()>0){
        Node*  curr=q.front();
        q.pop();
        cout<<curr->data<<  " ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}

//level order one level after another level 

void levelOrderLevelWise(Node* root){

    ///some of the change that we need to make in the code of the iteratibe approach of the code 
    if (root == NULL) return;  // handle empty tree
    //itterative 
    queue<Node* > q; 
    q.push(root);
    q.push(NULL);


    //now traversal 
    while(q.size()>0){
        Node* curr=q.front(); //get teh first ellement m
        q.pop(); 
        //change you need to do so the elements are traversed one line after another
        if(curr==NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }
        
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
        
    }
}


int main(){
    vector<int> preorder={10,30,-1,-1, 20,-1,-1};
    //now call
    Node* root=buildTree(preorder);
    //now do the traveral whether the tree is build or not 
    cout<<"PREORDER"<<endl;
    preorderTraversal(root);
    cout<<"POSTORDER"<<endl;
    postTraversal(root);
    cout<<"INORDER"<<endl;
    inOrderTravesal(root);

    cout<<"LEVEL ORDER"<<endl; 
    levelOrderLevelWise(root);

    return 0;
}




