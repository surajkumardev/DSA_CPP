// Think about Day 60 the day when you have completed the most important part so keep learing the most important ones 
// Day 5 --tree basics -> 18-09-27
// Binary Tree: Left View of Binary Tree | Right View of Binary Tree | Top View of Binary Tree

//question No. 1 ->Left View of the binar Tree 
//GFG
class Solution {
    public:
      vector<int> leftView(Node *root) { 
          vector<int> vec; 
          if(root==NULL){
              return vec;
          }
          queue<Node*> q;
          q.push(root);
          while(!q.empty()){
              int n=q.size();
              vec.push_back(q.front()->data);
              while(n--){
                  Node* temp=q.front();
                  q.pop();
                  if(temp->left){
                      q.push(temp->left);
                  }
                  if(temp->right){
                      q.push(temp->right);
                  }
                  
              }
          }
          return vec;
      }
  };
//LEFT VIEW With RECURSION-> Without Queue
class Solution {
    void Lview(Node* root, int level , vector<int> &ans){
        if(!root){
            return; //base
        }
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        Lview(root->left, level+1, ans);
        Lview(root->right, level+1, ans);
    }
  public:
    vector<int> leftView(Node *root) {
        // code here using rcursion
        //just har level ka first element 
        //how todo is ifsize is equal to the leve then print 
        if(!root){
            return {};
        }
        vector<int> ans; 
        
        Lview(root,0, ans);
        return ans; 
    }
};
//Question-> 2 Right View of the Binary Tree 
class Solution {
    public:
      void Rview(Node* root, int level, vector<int> &ans){
          if(!root){
              return; //base
          }
          if(ans.size()==level){
              ans.push_back(root->data);
          }
          //base ab right pahale call karenge 
          //then left wale ko call karenge
          Rview(root->right,level+1, ans);
          Rview(root->left, level+1, ans);
      }
      vector<int> rightView(Node *root) {
          //  Code here //using recursion 
          if(!root){
              return {};
          }
          vector<int> ans; 
          Rview(root, 0, ans);
          return ans;
      }
  };
//Question -> 3 TOP view of the binary tree 
class Solution {
    public:
    void find(Node* root, int pos, int &l, int &r){
        if(!root){
            return;
        }
        l=min(pos,l);
        r=max(pos, r);
        find(root->left, pos-1,l,r);
        find(root->right,pos+1, l, r);
  }
      void Tview(Node* root, int pos, vector<int> &ans, vector<int> &level,int l){
          if(!root){
              return;
          }
          if(level[pos]>l){
              ans[pos]=root->data;
              level[pos]=l;
          }
          //now 
          Tview(root->left, pos-1, ans, level, l+1);
          Tview(root->right, pos+1, ans,level,l+1);
      }
      // Function to return a list of nodes visible from the top view
      // from left to right in Binary Tree.
      vector<int> topView(Node *root) {
          // code here
          int l=0, r=0; 
          find(root, 0, l, r);
          vector<int> ans(r-l+1);
          vector<int> level (r-l+1, INT_MAX);
          Tview(root,-1*l, ans, level , 0);
          return ans; 
      }
  };


/*TOP VIEW OF THE BINARY TREE
pos: horizontal distance from the root.
Root starts at pos = 0.
Going left → pos-1.
Going right → pos+1.
l = leftmost position so far.
r = rightmost position so far.
After this function, you’ll know the range of positions [l…r] that the tree covers.


*/
  