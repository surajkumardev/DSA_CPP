#include <iostream>
#include <vector>
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

class SinglyLinkedList {
    Node* head;

public:
    SinglyLinkedList() {
        head = nullptr;
    }
    
    void insertFront(int val) {
        Node* temp = new Node(val);
        temp->next = head;
        head = temp;
    }

    void insertEnd(int val) {
        Node* temp = new Node(val);
        if (head == nullptr) {   // ✅ explicit null check
            head = temp;
            return;
        }
        Node* t = head;
        while (t->next) {
            t = t->next;
        }
        t->next = temp;
    }
    
    void deleteVal(int val) {
        if (head == nullptr) return; // ✅ handle empty list
        
        Node* temp = head;
        Node* prev = nullptr;

        while (temp != nullptr) {
            if (temp->data == val) {
                if (prev != nullptr) {
                    prev->next = temp->next;
                } else {
                    head = temp->next;
                }
                delete temp;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }
    
    void traverse() {
        if (head == nullptr) {   // ✅ optional empty check
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    
    vector<int> toArray() {
        vector<int> arr;
        Node* temp = head;
        while (temp != nullptr) {
            arr.push_back(temp->data);
            temp = temp->next;
        }
        return arr;
    }
};


// void insertAtPos(int val, int pos) {
//     Node* newNode = new Node(val);

//     // Insert at head
//     if (pos == 0) {
//         newNode->next = head;
//         head = newNode;
//         return;
//     }

//     Node* temp = head;
//     for (int i = 0; i < pos - 1 && temp != nullptr; i++) {
//         temp = temp->next;
//     }


//     if (temp == nullptr) {
//         cout << "Position out of range!" << endl;
//         delete newNode;
//         return;
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;
// }


int main() {
    SinglyLinkedList sll;

    sll.insertFront(10);
    sll.insertEnd(20);
    sll.insertFront(30);

    sll.traverse();   // 30 10 20

    sll.deleteVal(10);
    sll.traverse();   // 30 20

    vector<int> arr = sll.toArray();
    for (int x : arr) cout << x << " "; 
    cout << endl;

    return 0;
}
