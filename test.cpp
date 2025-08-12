#include <iostream>
using namespace std;
//smaller priority value=> higher priority
//NOte-> Priority queue sort the 
struct Node {
    int data;
    int priority;
    Node* next;
    Node(int d, int p) {
        data = d;
        priority = p; //pr
        next = NULL;
    }
};

class PriorityQueue {
    Node* front;

    public:
    PriorityQueue() {
        front = NULL;
    }

    //PUSH smaller value has higher priority
    void push(int data, int priority) {
        Node* newNode = new Node(data, priority);

        //Empty or new node has higher priority than front
        if (front == NULL || priority < front->priority) {
            newNode->next = front;
            front = newNode;
        }
        else {
            // Find correct position
            Node* temp = front;
            while (temp->next != NULL && temp->next->priority <= priority) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    //POP() same as the queue just remove the first 
    //as it is que
    void pop() {
        if (front == NULL) {
            cout << "Queue is empty Underflow condition"<<endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
    }

  
    //peek value
    int peek() {
        if (front == NULL) {
            cout << " Queue is empty";
            return -1;
        }
        return front->data;
    }

    // Check if empty
    bool empty() {
        return front == NULL;
    }

    // display
    void display() {
        Node* temp = front;

        while(temp!=NULL){
            cout<<" "<<temp->data<<" priority->"<<temp->priority<<" "<<endl;
            temp=temp->next; 
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.push(10, 2); 
    pq.push(5, 1);
    pq.push(20, 3);
    pq.push(15, 2);

    pq.display(); 

    // cout << "peek: " << pq.peek() << endl;


    cout<<"THE PEEK OR THE FRONT "<<pq.peek()<<endl;
    pq.pop();
    cout<<"AFter poping the element 5"<<endl;
    pq.display();
    cout<<"THE PEEK OR THE FRONT "<<pq.peek()<<endl;


    return 0;
}
