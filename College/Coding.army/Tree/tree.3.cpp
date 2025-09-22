// Think about Day 60 the day when you have completed the most important part 
//so keep learing the most important ones 
// Day 3 --tree basics -> 16-09-27
#include <iostream>
#include <vector>
#include<queue> 
using namespace std;
/*
    |Time Complexity  | Best | Worst | Space complexity
    | Level Order     | O(n) | O(n^2) | O(n)
    | Size Of BT      | O(n) | O(n)   | O(n) ->recusrion
    | Search          | O(n) | O(n)   | O(1)
    | Insert          | O(n) | O(n)   | O(n)
    | Delete          | O(n) | O(n)   | O(n)
    | Height          | O(n) | O(n)   | O(1)

*/
//question No. 1 Level order traversal-GFG 
class Solution {
    public:
      vector<vector<int>> levelOrder(Node *root) {
          vector<vector<int>> ans; 
          if (root==NULL) return ans;  // edge case: empty tree
          queue<Node*> q;
          q.push(root);
          while (!q.empty()) {
              int size = q.size();
              vector<int> level;
              for (int i = 0; i < size; i++) {
                  Node* temp = q.front();
                  q.pop();
                  level.push_back(temp->data);  
                  if (temp->left) q.push(temp->left);
                  if (temp->right) q.push(temp->right);
              }
              ans.push_back(level);
          }
          return ans;
      }
};

//question No. 2 Size of Binary Tree 
class Solution {
    public:
       void Total(Node* root, int &count){
          if(root==NULL) return; 
          count++; 
          Total(root->left,count);
          Total(root->right,count);
      }
      int getSize(Node* node) {
          int count=0;
          Total(node, count);
          return count;
      }
  };
  //another approach
  class Solution {
    public:
      int getSize(Node* node) {
          if(!node) return 0;  //node=True is root=NULL
          return 1+getSize(node->left)+getSize(node->right);
      }
  };
//question No. 3 Sum of Binary Tree -GFG
class Solution {
    public:
    void values(Node* root,int &summ){
        if(!root) return ; 
        summ=summ+root->data; 
        values(root->left, summ);
        values(root->right,summ);
    }
      int sumBT(Node* root) {
          int summ=0; 
          values(root, summ);
          return summ;
      }
  };
//another approrach 
int sumBT(Node* root) {
    if(!root){
        return 0;
    }
    return (root->data + sumBT(root->left)+sumBT(root->right));
}
//question No. 4 Count Leaves in Binary Tree -GFG
class Solution {
    public:
      void Total(Node* root, int &count){
          if(!root){
              return;
          }
          if(root->left == NULL && root->right== NULL){
              count++;
          }
          Total(root->left, count);
          Total(root->right,count);
      }
      int countLeaves(Node* root) 
          int count=0;
          Total(root,count);
          return count; 
      }
  };
//question No. 5 Count Non Leaf-Nodes in Tree- GFG
class Solution {
    public:
      void Total(Node* root, int &count){
          if(!root){
              return;
          }

          if(root->left != NULL || root->right!= NULL){
xt++;
          }
          
          Total(root->left, count);
          Total(root->right,count);
      }
      int countNonLeafNodes(Node* root) {
          int count=0;
          Total(root,count);
          return count; 
      }
  };


//Question No 6.Height  of Binary Tree -GFG
class Solution {
    public:
      int height(Node* node) {
          // Height is counted as number of nodes in the longest path
          // 1+max(0,0)-> 1+0-> 1 
          // if (node == NULL) return 0;
          // return 1 + max(height(node->left), height(node->right));

          
          // Height = 1 + maximum of left height and right height
          // Height is counted as number of edges in the longest path.
          // 1+max(-1,-1)-> 1+-1=0
          if(node==NULL) return  -1;
          return 1 + max(height(node->left), height(node->right));
          
      }
  };



int main(){ 
    
    return 0;
}