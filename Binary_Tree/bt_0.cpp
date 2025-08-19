//Levell order Traversal of a binary Tree
#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<queue>

using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    node(int val) {
        data = val;
        left = right = NULL;
    }
};


//Level Order Travesal of the code 
vector<vector<int>> levelOrder(node* root) {
    vector<vector<int>> ans;  
    if (root == NULL) {
        return ans;  
    }
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {  // fix: should be !q.empty()
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++) {
            node* temp = q.front();
            q.pop();
            level.push_back(temp->data);  // fix: store node's data

            if (temp->left != NULL) {
                q.push(temp->left);
            }
            if (temp->right != NULL) {
                q.push(temp->right);
            }
        }

        ans.push_back(level);  // fix: push after level is filled
    }

    return ans;
}










//change s

int main() {
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    vector<vector<int>> result = levelOrder(root);

    // Print the result
    for (auto level : result) {
        for (auto val : level) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
