#include<iostream>
using namespace std;

class Dnode {
public:
    int data;
    Dnode* Next;
    Dnode* prev;

    Dnode(int val) {
        data = val;
        Next = prev = NULL;
    }
};

Dnode* head = NULL;

// Function to count total nodes
int getCount() {
    int count = 0;
    Dnode* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->Next;
    }
    return count;
}

// Insertion at the middle
void insertMiddle(int val) {
    Dnode* newNode = new Dnode(val);
    if (head == NULL) {
        head = newNode;
        return;
    }

    int count = getCount();
    int mid = count / 2;

    Dnode* temp = head;
    for (int i = 0; i < mid - 1 && temp->Next != NULL; i++) {
        temp = temp->Next;
    }

    newNode->Next = temp->Next;
    newNode->prev = temp;

    if (temp->Next != NULL)
        temp->Next->prev = newNode;

    temp->Next = newNode;
}

// Count frequency of a value
int countFrequency(int val) {
    int freq = 0;
    Dnode* temp = head;
    while (temp != NULL) {
        if (temp->data == val)
            freq++;
        temp = temp->Next;
    }
    return freq;
}

// Delete given number of repetitions
void deleteReps(int val, int reps) {
    Dnode* temp = head;
    int deleted = 0;

    while (temp != NULL && deleted < reps) {
        if (temp->data == val) {
            Dnode* toDelete = temp;

            if (temp == head) {
                head = temp->Next;
                if (head != NULL)
                    head->prev = NULL;
                temp = head;
            } else {
                temp->prev->Next = temp->Next;
                if (temp->Next != NULL)
                    temp->Next->prev = temp->prev;
                temp = temp->Next;
            }

            delete toDelete;
            deleted++;
        } else {
            temp = temp->Next;
        }
    }

    cout << deleted << " occurrence(s) of " << val << " deleted.\n";
}

// Traverse the list
void display() {
    Dnode* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->Next;
    }
    cout << endl;
}

int main() {
 
    insertMiddle(10);
    insertMiddle(20);
    insertMiddle(30);
    insertMiddle(10);
    insertMiddle(40);
    insertMiddle(10);

    cout << "Original List: ";
    display();

    int val;
    cout << "Enter value to delete: "<<endl;;
    cin >> val;

    int freq = countFrequency(val);
    if (freq == 0) {
        cout << val << " not found in the list.\n";
    } else {
        cout << val << " occurs " << freq << " times.\n";
        int delCount;
        cout << "How many repetitions do you want to delete? ";
        cin >> delCount;

        if (delCount > freq) {
            cout << "Only " << freq << " available. Deleting all.\n";
            delCount = freq;
        }

        deleteReps(val, delCount);

        cout << "\nUpdated List: ";
        display();
    }

    return 0;
}
