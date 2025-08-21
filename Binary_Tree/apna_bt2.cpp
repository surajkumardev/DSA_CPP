//kth level of hte binary tree
#include<iostream> 
using namespace std; 



    //kth level 
    void kthlevel(TreeNode* root, int k){
        if(root==NULL){
                return; 
        }
        if(k==1){
            cout<<root->data<<" ";
            return;
        }
        kthlevel(root->left, k-1);
        kthlevel(root->right, k-1);
    }


    //kth level sum 

        int kthlevel(TreeNode* root, int k){
         //   int sum=0; ///it will not work as every time it will reset to 0 ;
        if(root==NULL){
                return 0; 
        }
        if(k==1){
            return root->data;
        }
        int leftsum=kthlevel(root->left, k-1);
        int rightSUm=kthlevel(root->right, k-1);
        return leftsum+rightSUm; 
    }
    static int sums=0;
            int kthlevel(TreeNode* root, int k){
         //   int sum=0; ///it will not work as every time it will reset to 0 ;
        if(k==NULL){
                return 0; 
        }
        if(k==1){
            sums=sums+ root->data;
            return sums;
        }
        kthlevel(root->left, k-1);
        kthlevel(root->right, k-1);
        // return leftsum+rightSUm; 
    }
int main(){





    return 0;
}