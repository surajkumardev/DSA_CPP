//TOpic-> Insertion and deletion in linked list 
/*
Date -> 18/09/25 -> keep going and Think of the day when you have finally completed it 
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

//=========================DELETE=====================
//class 2 -> RemoveHead 
Node* removeHead(Node* head){
    if(head==NULL) return head; 
    //else
    Node* temp=head;    // store old head
    head=head->next;   // move head forward
    delete temp;      // free memory of old head
    return head; 
}

//class 2 -> RemoveTail
Node* removeTail(Node* head){
    if(head==NULL || head->next==NULL){
        return head; //one or no element 
    }
    Node* temp=head; 
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next; //remove last node
    temp->next=nullptr; //set it null
    return head; //return starting 
}

//remove the K(th) Element
Node* removekth(Node* head, int k){
    if(head==NULL){
        return head; //no element 
    }
    if(k==1){
    //head case
    Node* temp=head; 
    head=head->next;
    delete temp;
    return head; 
    }
    //middle case
    int count=1; 
    Node* temp=head; 
    Node* prev=NULL;

    while(temp){
        count++;
        if(count==k){
            prev->next=prev->next->next; //move next ;
            delete temp;
            break;
        }
        prev=temp; 
        temp=temp->next;
    }
    return head; 
}
//remove the node by value
Node* removeEl(Node* head, int val){
    if(head==NULL){
        return head; 
    }
    if(head->data==val){
        Node* temp=head; //why because if don't delte it will haunt the people
        head=head->next; 
        delete temp; //so after death you must bury the the body other wise uske atma ko santi nahi milega
        return head;
    }

    Node *temp=head; 
    Node *prev=NULL;
    while(temp!=NULL){
        if(temp->data==val){
            //just move
            prev->next=prev->next->next; 
            delete temp; 
            break;
        }
        prev=temp; 
        temp=temp->next;//traversal
    }
    return head; 
}
//=========================INSERTION=====================
//now the insertion part
Node* insertHead(Node* head, int val){
    Node* newNode=new Node(val);
    newNode->next=head; 
    head=newNode; 
    return head; 
}
//Insertion at the kth position
Node* insertinoKth(Node* head, int val, int k) {
    if (head == NULL) {
        return new Node(val); // if empty then return new node
    }

    if (k == 1) {
        return insertHead(head, val); // insert at head
    }

    Node* newNode = new Node(val);
    int count = 1;
    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL) {
        if (count == k) {
            prev->next = newNode;
            newNode->next = temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
        count++;
    }

    // If k is greater than length, insert at end
    prev->next = newNode;
    return head;
}

//Insetion at the tail 
Node* insertiontail(Node* head, int val){
    if(head==NULL){
        return new Node(val); //if empty 
    }
    Node* temp=head; 
    while(temp->next!=NULL){
        temp=temp->next; 
    }
    Node* newNode=new Node(val);
    temp->next=newNode; 
    return head; 
}
//Insertion before the value 
Node* insertionBeforeValue(Node* head, int val, int el) {
    if (head == NULL) {
        return NULL;
    }

    // Case 1: insert before head
    if (head->data == val) {
        Node* newNode = new Node(el);
        newNode->next = head;
        return newNode;
    }

    // Case 2: insert before a middle node
    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL) {
        if (temp->data == val) {
            Node* newNode = new Node(el);
            prev->next = newNode;
            newNode->next = temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }

    // If value not found → no insertion
    return head;
}






int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=convertArrLink(arr);
    traverse(head);
    cout<<endl;
    head=removeHead(head);
    traverse(head);
    
    cout<<endl;
    head=removeTail(head);
    traverse(head);

    cout<<endl;
    head=removekth(head, 3);
    traverse(head);
    return 0;
}

