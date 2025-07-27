#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
    Node* head;
public:
    SinglyLinkedList() : head(nullptr) {}
    
    void insertFront(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
    }

    void insertEnd(int val) {
        Node* temp = new Node(val);
        if (!head) {
            head = temp;
            return;
        }
        Node* curr = head;
        while (curr->next) curr = curr->next;
        curr->next = temp;
    }
    
    void deleteVal(int val) {
        Node *curr = head, *prev = nullptr;
        while (curr) {
            if (curr->data == val) {
                if (prev) prev->next = curr->next;
                else head = curr->next;
                delete curr;
                return;
            }
            prev = curr;
            curr = curr->next;
        }
    }

    void traverse() {
        Node* curr = head;
        while (curr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
    
    vector<int> toArray() {
        vector<int> arr;
        Node* curr = head;
        while (curr) {
            arr.push_back(curr->data);
            curr = curr->next;
        }
        return arr;
    }
};

int main() {
    SinglyLinkedList sll;
    sll.insertFront(10);
    sll.insertEnd(20);
    sll.insertFront(30);
    sll.traverse();

    sll.deleteVal(10);
    sll.traverse(); 

    vector<int> arr = sll.toArray();
    for (int x : arr) cout << x << " "; 
    cout << endl;
    return 0;
}
