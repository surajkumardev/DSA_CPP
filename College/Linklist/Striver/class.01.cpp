//Introduction to LinkedList, learn about struct, and how is node represented
/*
Date -> 17/09/25 -> keep going and Think of the day when you have finally completed it 
Notes: -> 
1. Return the start Node* pointer
2. Never Ever Tamper the head pointer
3. 
4. 
*/

#include <iostream>
#include<vector> 
using namespace std;

class Node{
    public: 
    int data; 
    Node* next; 
    Node(int val){
        data=val;
        next=NULL; 
    }
};
//{array to linklist-> O(n)}
Node* convertArrLink(vector<int> &arr)
{
    Node* head=new Node(arr[0]); 
    Node* mover=head; 

    for(int i=1;i<arr.size();i++){ //!i=0
        Node* temp=new Node(arr[i]);
        mover->next=temp; 
        mover=temp;
    }
    return head; 
}

// {Traversal Of linkList-> O(n)}
void traverse(Node* head)
{
    Node* temp=head; 
    while(temp!=NULL){
        cout<<temp->data<<" "; 
        temp=temp->next; 
    }
}

// {Lenght Of linkList-> O(n)}

int lengOfLL(Node* head){
    int count=0;
    Node* temp=head;
    while(temp){
        count++;
        temp=temp->next;
    }
    return count; 
}

// {Search Of linkList-> O(1), o(n/2), o(n)}
bool found(Node* head, int target){
    Node* temp=head; 
    while(temp){
        if(temp->data==target){
            return true; 
        }
        temp=temp->next;
    }
    return false; 
}
int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=convertArrLink(arr);

    cout<<head->data<<endl;
    cout<<head->next->data<<endl;
    cout<<head->next->next->data<<endl;
    cout<<head->next->next->next->data<<endl;
    cout<<head->next->next->next->next->data<<endl;
    // traverse(head);
    cout<<lengOfLL(head)<<endl;
    int target=3;
    if(found(head,target)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    //travesal 
    return 0;
}