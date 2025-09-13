#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
    Node* head;
public:
    CircularLinkedList() : head(nullptr) {}

    void insertFront(int val) {
        Node* temp = new Node(val);
        if (!head) {
            head = temp;
            temp->next = head;
            return;
        }
        Node* curr = head;
        while (curr->next != head) curr = curr->next;
        curr->next = temp;
        temp->next = head;
        head = temp;
    }

    void insertEnd(int val) {
        Node* temp = new Node(val);
        if (!head) {
            head = temp;
            temp->next = head;
            return;
        }
        Node* curr = head;
        while (curr->next != head) curr = curr->next;
        curr->next = temp;
        temp->next = head;
    }

    void deleteVal(int val) {
        if (!head) return;
        Node* curr = head;
        Node* prev = nullptr;
        do {
            if (curr->data == val) {
                if (prev) prev->next = curr->next;
                else {
                    if (curr->next == head) head = nullptr;
                    else {
                        Node* last = head;
                        while (last->next != head) last = last->next;
                        last->next = curr->next;
                        head = curr->next;
                    }
                }
                delete curr;
                return;
            }
            prev = curr;
            curr = curr->next;
        } while (curr != head);
    }

    void traverse() {
        if (!head) return;
        Node* curr = head;
        do {
            cout << curr->data << " ";
            curr = curr->next;
        } while (curr != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;
    cll.insertFront(10);
    cll.insertEnd(20);
    cll.insertFront(30);
    cll.insertEnd(40);
    cll.traverse(); 

    cll.deleteVal(10);
    cll.traverse(); 

    cll.deleteVal(30);
    cll.traverse(); 

    return 0;
}
