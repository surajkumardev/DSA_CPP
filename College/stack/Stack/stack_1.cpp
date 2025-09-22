//stack implementation Using Vectors 

// Stack operations (push, pop, top) are O(1) and clearly 
// stack do the insertion , deletion and top operation in o(1) time complexity but the array do it in o(n) time compelxity 
// o(1)>>>>o(n)  as the o(1) is far better than the o(n) time compelxity 
#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> v;

public:
    //push operation
    void push(int val) {
        v.push_back(val);
    }


        //pop operation
    void pop() {
        if (v.empty()) {
            cout << "Stack Underflow\n";
            return;
        }
        v.pop_back();
    }
    
    //peek
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