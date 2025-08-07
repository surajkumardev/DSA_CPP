//stack implementation Using Vectors 
#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> v;

public:
    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        if (v.empty()) {
            cout << "Stack Underflow\n";
            return;
        }
        v.pop_back();
    }

    int peek() {
        if (v.empty()) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return v.back();
    }

    bool isEmpty() {
        return v.empty();
    }

    void display() {
        for (int i = v.size() - 1; i >= 0; i--) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    Stack obj;
    obj.push(10); obj.push(20); obj.push(30);
   obj.push(10); obj.push(300); obj.push(30);
    
    obj.pop(); obj.pop();

    obj.display();
    
return 0;
}