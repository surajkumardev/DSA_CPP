//do the inorder preorder and postorer traverrsal in one go 

// key Idea or logic=> ?

// 👣 Key Idea (One-Traversal Trick):
// We use a stack of pairs:

// <1,1> //1 in the pre 
// <1,2> //1 in the post
// <1,3> //1 in the in



#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<utility>
// #include<pair>


struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
//pair
//tep 2: Define the pair structure for the stack
// Each item in the stack should keep track of:
// the current Node*


// the state (1, 2, or 3) indicating where we are in traversal
struct Pair{
    Node* node;
    int state;
    Pair(Node* n, int s){
        node=n;
        state=s;
    }
};


using namespace std; 

int main(){
    



}