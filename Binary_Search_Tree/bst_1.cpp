#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
// Insertion
Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val); //recursive calll 
    }
    else{
        root->right = insert(root->right, val);   
    }
    return root;
}

//this is how you find the minimum from the right part to delete the element 
Node* findMin(Node* root) {
    while (root && root->left != nullptr) {
         root = root->left;
    }
    return root;
}




Node* deleteNode(Node* root, int val){
    if(root==nullptr){
        return root; 
    }
    if(val<root->data){
        root->left=deleteNode(root->left, val);
    }
    else if(val>root->data){
        root->right=deleteNode(root->right,val);
    }else{
        //No child case 
        if(root->left==nullptr && root->right==nullptr){
            delete root;
            return nullptr; 
        }
        //one child
        else if(root->left==nullptr ){
            Node* temp=root->right;
            delete root;
            return temp; 
        }
        else if(root->right=nullptr){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //two child 
        else{
            Node* temp=findMin(root->right);
            root->data=temp->data; 
            root->right=deleteNode(root->right,temp->data);
        }

        //two child 

        return root;
    }

}











//traversal 
//print the values before and after the deletion 
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left); //left
        cout << root->data << " "; //root
        inorder(root->right); //right
    }
}
int main() {
    Node* root = nullptr;
    int n, val;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }
    //inorder 
    inorder(root);
    cout << endl;

    int dele;
    cin>>dele; 


    deleteNode(root, dele);
    //now call the indord er
    inorder(root);




    return 0;
}