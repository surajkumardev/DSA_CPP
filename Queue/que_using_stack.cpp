// ✅ 2. Queue using Stacks (2 stacks method)
// Logic:
// Use two stacks s1 and s2

// Enqueue: push into s1

// Dequeue: if s2 is empty, move all from s1 to s2 and pop from s2


#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:
    void enqueue(int x) {
        s1.push(x);
    }

    void dequeue() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue Underflow\n";
            return;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        s2.pop();
    }

    int front() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is Empty\n";
            return -1;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool isEmpty() {
        return s1.empty() && s2.empty();
    }
};
