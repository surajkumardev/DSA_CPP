#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q1, q2;

public:
    void push(int x) {
        q1.push(x);
    }

    void pop() {
        if (q1.empty()) {
            cout << "Stack Underflow\n";
            return;
        }

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();  // Remove the last pushed (top) element

        swap(q1, q2);
    }

    int top() {
        if (q1.empty()) {
            cout << "Stack is Empty\n";
            return -1;
        }

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();
        q2.push(topElement);
        q1.pop();

        swap(q1, q2);
        return topElement;
    }

    bool isEmpty() {
        return q1.empty();
    }
};