// Think about Day 60 the day when you have completed the most important part so keep learing the most important ones 
// Day 6 --tree basics -> 19-09-27
// Binary Tree: PreOrder Traversal Iterative | PostOrder Traversal Iterative | InOrder Traversal
// bool iScousion(Node* root, int a, int b){
//     //find the leve l
//     queue<Node*> q; 
//     q.push(root);
//     int l1=-1, l2=-1;
//     int level=0;
//     while(!q.empty()){
//         int n=q.size();
//         while(n--){
//             Node* temp=q.front();
//             q.pop();
//             if(temp->data==a){
//                 l1=level;
//                 if(temp->data==b){
//                     l2=level; 
//                 }
//                 if(temp->left){
//                     q.push(temp->left);
//                 }
//                 if(temp->right){
//                     q.push(temp->right);
//                 }
//             }
//             level++;
//         }
//     }
// }
/*
........................Rview of the binary Tree Leetcode....................
class Solution {
//recursive find the ans; 
    void rview(TreeNode* root, int level , vector<int> &ans){
        if(!root)
            return; 
        //node -> right mai jana hai 
        TreeNode* temp=root; 
        if(ans.size()==level){
            ans.push_back(temp->val);
        }
        rview(temp->right, level+1, ans);
        rview(temp->left, level +1, ans);
}
// ...why it works because we only want one element form one level 
// ...if the size of the ans == level which we have not visited the level yet
// ....and will push the answer to that level 
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans; 
        if(!root){
            return ans; 
        }
        rview(root, 0,ans);
        return ans; 
    }
};
//preoorderj--> Recursive Approach  
void preorder(Node* root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    prerorder(root->left);
    prerorder(root->right);
}
//PostOrder 
void postorder(Node* root){
    if(!root){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
//Inorder 
void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
*/
//==========ITERATIVE APPROACH TRAVERSAL======//
//Preorder COdde 

#include<iostream> 
#include<vector> 
#include<stack>
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
//++++++++++++++++++++=Preorder=+++++++++++++++++++++++
class Solution {
    public:
      vector<int> preOrder(Node* root) {
          //Node-> left-> right 
          //using stack for iterative appraoch 
          stack<Node*> st; 
          st.push(root);
          vector<int> ans; 
          while(!st.empty()){
              Node* temp=st.top();
              st.pop();
              ans.push_back(temp->data);
              //right 
              if(temp->right){
                  st.push(temp->right);
              }
              //left -> stack
              if(temp->left){
                  st.push(temp->left);
              }
          }
          return ans; 
      }
  };
class Solution {
    public:
      vector<int> postOrder(Node* node) {
          // code here
          //lEft -> right -> node 
          //pre -> 
          // node-. right -. left 
        // just uska ulta so //reverse 
        // using reverse furciont 
        // reverse(st.begin(),st.end());     }
      
      stack<Node*> st; 
      st.push(node); 
      vector<int> ans; 
      while(!st.empty()){
          Node* temp=st.top(); 
          st.pop(); 
          ans.push_back(temp->data);
          ///right -> stack hai bhai
          if(temp->left){
              st.push(temp->left);
          }
          //left 
          if(temp->right){
              st.push(temp->right);
          }
      }
      reverse(ans.begin(),ans.end());
      return ans;
  }
};

    //1st tiem visit karunga R->N-> L 
    //2nd time visit dierct print 
    //3rd time => create a bool of visited array 
    class Solution {
        public:
          vector<int> inOrder(Node* root) {
              // code here
              stack<Node*> st ;
              stack<bool> visited; 
              st.push(root); 
              visited.push(0);
              vector<int> ans; 
              
              while(!st.empty()){
               Node* temp=st.top();
               st.pop(); 
               bool flag=visited.top();
               visited.pop();
               //fist time visitd
               if(flag==0){
                   //not visited 
                   if(temp->right){
                       st.push(temp->right);
                       visited.push(0);
                   }
                   //node     
                   st.push(temp);
                   visited.push(1);
                   
                   //left
                   if(temp->left){
                       st.push(temp->left);
                       visited.push(0);
                   }
               }
               else{
                   ans.push_back(temp->data);
               }
              }
              return ans; 
          }
      };

int main()
{
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    ///calling 
    preorderr(root);
    cout<<endl;
    PostOrder(root);
    cout<<endl;
    Inorder(root);
    return 0;
}