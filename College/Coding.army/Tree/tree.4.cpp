// Think about Day 60 the day when you have completed the most important part 
//so keep learing the most important ones 
// Day 4 --tree basics -> 17-09-27
#include <iostream>
#include <vector>
#include<queue> 
using namespace std;

//100. Same Tree-> leetcode-> trees are identical or not
class Solution {
    public: //tc-> o(n)
        bool isSameTree(TreeNode* p, TreeNode* q) {
            //base 
            if(!p && !q){
                return true; 
            }
            if((!p && q) || (p && !q)){
                return 0;
            }
            if(p->val != q->val){
                return false; 
            }
            return( (isSameTree(p->left, q->left) )&& (isSameTree(p->right, q->right)));
    
        }
};
//Mirror Tree ques
class Solution {
    public:
      void mirror(Node* node) {
          // code
      if(!node){
          return;
      }
      Node* temp=node->left;
      node->left=node->right;
      node->right=temp; 
      
      mirror(node->left);
      mirror(node->right);
      
          
      }
  };
//101. Symmetric Tree-> leetcode-> trees are mirror or not
  class Solution {
    bool isMirror(TreeNode* a, TreeNode* b){
        if(!a && !b){
            return true; 
        } if(!a || !b){
            return false;
        }
        return (a->val == b->val) && isMirror(a->left, b->right) && isMirror(a->right, b->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true; 
        return isMirror(root->left,root->right);
        
    }
};
//Balanced Tree Checking
class Solution {
    int height(Node* root, bool &valid){
        if(!root){
          return 0;  
        }
        int l=height(root->left, valid);
        int r=height(root->right, valid); 
        if(abs(l-r)>1)
            valid=0; 
            
        return 1+max(l,r); 
        
    }
  public:
    bool isBalanced(Node* root) {
        // Code here
        bool valid=1; 
        height(root, valid);
        return valid;
    }
};
//Leetcode Balanced Tree Checking
class Solution {
    int height(TreeNode* root, bool &valid){
        if(!root){
                return 0;
        }
        //left 
        int l=height(root->left, valid);
        int r=height(root->right, valid); 

        if(abs(l-r)>1) valid=0;

        return 1+max(l,r);
    }

public:
    bool isBalanced(TreeNode* root) {
        //if root (left - right)== {-1,0,1 } ; then it is otherwise not 
        bool valid=1; 
        height(root,valid); 
        return  valid; 

        
    }
};


