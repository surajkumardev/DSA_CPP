//i have to create a bst dynamically then use the concept of deletion of the node in the bst 
///in deletion i have to use the concept of the find the minimum element from the right part and then replace with the root nodes

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

// Insert into BST
Node* insert(Node* root, int val) {
    if (root == nullptr) return new Node(val);
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

// Find minimum value node (in right subtree for deletion)
Node* findMin(Node* root) {
    while (root && root->left != nullptr) root = root->left;
    return root;
}

// Delete from BST
Node* deleteNode(Node* root, int key) {
    if (root == nullptr) return root;

    if (key < root->data) root->left = deleteNode(root->left, key);
    else if (key > root->data) root->right = deleteNode(root->right, key);
    else {
        // Case 1: No child
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        // Case 2: One child
        else if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Two children
        Node* temp = findMin(root->right); // min from right
        root->data = temp->data; // replace
        root->right = deleteNode(root->right, temp->data); // delete duplicate
    }
    return root;
}

// Inorder Traversal
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
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

    cout << "Inorder before deletion: ";
    inorder(root);
    cout << endl;

    int delVal;
    cout << "Enter value to delete: ";
    cin >> delVal;

    root = deleteNode(root, delVal);

    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}
