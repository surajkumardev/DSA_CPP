//doublY linked list 
//think of the day when you have completed 
//the DSA PART -> 😁

#include<iostream>
#include<queue>
#include<vector> 
using namespace std; 


class Node{
    public: 
    int data ;
    Node* next; 
    Node* back; 
    Node(int val){
        data=val ;
        next=NULL;
        back=NULL;
    }
};
//ArrayToLinkList 
Node* convertArr2DLL(vector<int> &arr){
    if(arr.size()==0){
        return NULL;
    }
    Node* head=new Node(arr[0]);
    Node* prev=head; 
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        prev->next = temp;   // forward link
        temp->back = prev;   // backward link
        prev = temp;         // move forward
    }
    return head; 
}

//print 
void print(Node* head){
    Node* temp=head; 
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next ;

    }
}

//reverse 
void reverse(Node* head){
    Node* temp=head; 
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->back ;
    }
}
//============================DELETION==========================
//deletionAtHead
Node* deletionAtHead(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* prev=head;
    head=head->next;

    head->back=NULL;
    prev->next=NULL;

    delete prev;
    return head; 
}
//deletionAtTail
Node* deletionAtTail(Node * head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* tail=head; 
    while(tail->next !=NULL){
        tail=tail->next; 
    }
    Node* newTail=tail->back;
    newTail->next=NULL;
    tail->back=NULL;
    delete tail;
    return head; 
}
//deletionATKth
Node* deletionATKth(Node* head, int k){
    if(head==NULL){
        return NULL;
    }
    int count=0;
    Node* kNode=head;
    while(kNode!=NULL){
        count++;
        if(count==k){
            break;
        }
        kNode=kNode->next;
    }
    Node* prev=kNode->back;
    Node* front=kNOde->next;

    if(prev==NULL && front==NULL){
        return deletionAtHead(head);
    }else if(front==NULL){
        return deletionAtTail(head);
    }
    prev->next=NULL;
    front->back=prev;

    kNode->next=NULL;
    kNode->back=NULL;

    delete kNode; 
    return head; 
}



//deleteNode
void deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next; 

    if(fornt==NULL){
        prev->next=NULL;
        temp->back=NULL;

        free(temp);
        return ;
    }
    prev->next=front;
    front->back=prev;
    temp->next=temp->back=nullptr;
    free(temp);

}

//============================Insertion==========================
//insertAtHead
Node* insertAtHead(Node* head, int val){
    
}


int main(){
    vector<int> arr={1,5,8,7};
    Node* head=convertArr2DLL(arr);
    print(head);



    return 0;
}