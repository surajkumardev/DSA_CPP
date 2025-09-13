#include <iostream>
#include <vector>
using namespace std;

struct DNode {
    int data;
    DNode* prev;
    DNode* next;
    DNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
    DNode* head;
public:
    DoublyLinkedList() : head(nullptr) {}
    
    void insertFront(int val) {
        DNode* temp = new DNode(val);
        if (head) head->prev = temp;
        temp->next = head;
        head = temp;
    }

    void insertEnd(int val) {
        DNode* temp = new DNode(val);
        if (!head) {
            head = temp;
            return;
        }
        DNode* curr = head;
        while (curr->next) curr = curr->next;
        curr->next = temp;
        temp->prev = curr;
    }
    
    void deleteVal(int val) {
        DNode* curr = head;
        while (curr) {
            if (curr->data == val) {
                if (curr->prev) curr->prev->next = curr->next;
                else head = curr->next;
                if (curr->next) curr->next->prev = curr->prev;
                delete curr;
                return;
            }
            curr = curr->next;
        }
    }

    void traverse() {
        DNode* curr = head;
        while (curr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
    
    vector<int> toArray() {
        vector<int> arr;
        DNode* curr = head;
        while (curr) {
            arr.push_back(curr->data);
            curr = curr->next;
        }
        return arr;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertFront(10);
    dll.insertEnd(20);
    dll.insertFront(30);
    dll.traverse(); 

    dll.deleteVal(10);
    dll.traverse(); 

    vector<int> arr = dll.toArray();
    cout << "Array representation: ";
    for (int x : arr) cout << x << " "; 
    cout << endl;
    return 0;
}
