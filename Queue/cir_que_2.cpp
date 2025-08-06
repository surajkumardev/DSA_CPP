// 🔁 Circular Queue Using Linked List
// 🔸 Key Idea:
// In a circular linked list, the last node points back to the first.

// Maintain front and rear pointers.

// This allows enqueuing and dequeuing in O(1) time.


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};


class CircularQueue {
private:
    Node* front;
    Node* rear;

public:
    CircularQueue() {
        front = rear = nullptr;
    }

    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (front == nullptr) {
            front = rear = newNode;
            rear->next = front; 
        } else {
            rear->next = newNode;
            rear = newNode;
            rear->next = front;
        }
    }
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is Empty\n";
            return;
        }

        if (front == rear) {
            // Only one node
            delete front;
            front = rear = nullptr;
        } else {
            Node* temp = front;
            front = front->next;
            rear->next = front;
            delete temp;
        }
    }

    int peek() {
        if (front == nullptr) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return front->data;
    }

    void display() {
        if (front == nullptr) {
            cout << "Queue is Empty\n";
            return;
        }

        Node* temp = front;
        cout << "Queue: ";
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != front);
        cout << endl;
    }

    bool isEmpty() {
        return front == nullptr;
    }
};

// 🔸 Main Function
int main() {
    CircularQueue cq;

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.display(); 
    cout << "Front Element: " << cq.peek() << endl; 

    cq.dequeue();
    cq.display(); 

    cq.dequeue();
    cq.dequeue();
    cq.dequeue(); 

    cout << "Is Queue Empty? " << (cq.isEmpty() ? "Yes" : "No") << endl; 

    return 0;
}
