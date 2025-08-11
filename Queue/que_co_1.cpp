#include <iostream> ------------------------------queue Implementation-------------------------------------------
using namespace std;

class Queue {
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int s) {
        arr = new int[s];
        front = rear = -1;
        size = s;
    }

    void push(int val) {
        // Overflow
        if (rear == size - 1) {
            cout << "Overflow" << endl;
            return;
        }
        // Empty queue
        if (front == -1 && rear == -1) {
            front = rear = 0;
            arr[rear] = val;
        }
        else {
            rear++;
            arr[rear] = val;
        }
        cout << arr[rear] << " pushed into the queue" << endl;
    }

    void pop() {
        if (front == -1) {
            cout << "Underflow" << endl;
            return;
        }
        cout << arr[front] << " popped from the queue" << endl;
        if (front == rear) {
            front = rear = -1; // Reset when empty
        } else {
            front++;
        }
    }

    bool isempty() {
        return front == -1;
    }

    int issize() {
        if (isempty()) return 0;
        return rear - front + 1;
    }
};

int main() {
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);

    q.pop();
    q.pop();

    cout << "Queue size: " << q.issize() << endl;
    cout << "Is empty: " << (q.isempty() ? "Yes" : "No") << endl;

    return 0;
}
