//question-> doubly linked list -> Insertion to be done at the middle of the linked list 
//deletion -> multiple repetettion of the values 
            // -> frequency of repetition of that number no to the user 
            // -> how many reps you want to delete 
#include<iostream>
using namespace std;
class Dnode{
    public: 
    int data;
    Dnode* Next;
    Dnode* prev;
    Dnode(int val){
        data=val;
        Next=prev=NULL;
    }
};
Dnode* head = NULL;

//to count the number of elments in the LL
int getCount() {
    int count = 0;
    Dnode* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->Next;
    }
    return count;
}
//to insert in the middle
void insertMiddle(int val) {
    Dnode* newNode = new Dnode(val); //structure create 
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


    //means the temp is not present in the second last position 
    if (temp->Next != NULL)
        temp->Next->prev = newNode;

    temp->Next = newNode;
}

int countFrequency(int val) {
    int freq = 0;
    Dnode* temp = head;
    //similar to traversal just take a count to count the number of frequency
    while (temp != NULL) {
        if (temp->data == val) 
            freq++;
        temp = temp->Next;
    }


    return freq;
}


// Delete given number of repetitions
// AACHE SAI ISKO TOPIC TO COMPLETE KARNA HOGA 
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
            } 
            else {
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

    cout<<"LL Before any opeartion"<<endl;
    display();

    int val;
    cout<<"Enter the value you want to delete"<<endl;
    cin >> val;

    int freq = countFrequency(val);
    if (freq == 0) {
        cout << val << " not found in the list.\n";
    } else {
        cout << val << " occurs " << freq << " times.\n";
        int rep_delete;
        cout<<"How many repetition you want to delete ";
        cin >> rep_delete;

        if (rep_delete > freq) {
            cout<<"Frequency is "<<freq<<"only";
            rep_delete = freq;
        }

        deleteReps(val, rep_delete);

        cout << "\nUpdated List: ";
        display();
    }

    return 0;
}