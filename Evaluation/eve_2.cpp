#include <iostream>
using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;
    Node(int d, int p) {
        data = d;
        priority = p;
        next = NULL;
    }
};

class PriorityQueue {
    Node* front;

public:
    PriorityQueue() {
        front = NULL;
    }

    // Insert according to priority (smaller value = higher priority)
    void push(int data, int priority) {
        Node* newNode = new Node(data, priority);

        // Case 1: Empty or new node has higher priority than front
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


    // Remove highest priority element
    void pop() {
        if (front == NULL) {
            cout << "Priority Queue is empty!\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;
    }

    // highest priority element
    int top() {
        if (front == NULL) {
            cout << "Priority Queue is empty!\n";
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
        while (temp != NULL) {
            cout << "(" << temp->data << ", p=" << temp->priority << ") ";
            temp = temp->next;
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

    cout << "Top: " << pq.top() << endl;
    pq.pop();
    pq.display();

    return 0;
}
