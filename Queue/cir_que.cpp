// //✅ Circular Queue using Array
// 🔁 Logic:
// Use a fixed-size array with front and rear pointers.

// Wrap-around using modulo operator.

// One extra space is reserved to distinguish between full and empty states.




#include <iostream>
using namespace std;

class CircularQueue {
private:
    int* arr;
    int size;
    int front;
    int rear;

public:
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue is Full\n";
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = val;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }

        if (front == rear) {
            front = rear = -1; // Only one element
        } else {
            front = (front + 1) % size;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }

        int i = front;
        cout << "Queue: ";
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    ~CircularQueue() { //de_constructor
        delete[] arr;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    q.enqueue(50);
    q.enqueue(60);
    q.display();

    cout << "Front element: " << q.peek() << endl;

    q.enqueue(70);
    return 0;
}
