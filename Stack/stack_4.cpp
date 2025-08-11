///-----------------------------------------------------Linklist implementaion of the Stacks-------------------------------
#include<iostream>
using namespace std; 
// Here’s the plan we’ll follow:
// Define Node structure
// Initialize an empty stack (top = NULL)
// Push operation — create a new node and link it to the top
// Pop operation — remove the top node and adjust pointer
// Peek & isEmpty for checking values
struct Node{
    int data; 
    Node* next; 
    Node(int value){
        data=value;
        next=NULL; 
    }
};

class Stack{
    public: 
    Node* top; //pointer to top node


};
int main(){



    return 0;
}