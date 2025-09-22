//use the concept of the {queue}
#include<iostream>
#include<vector>
#include<stack>
#include<utility> //pair
#include<queue>
using namespace std;

// 🔧 Main Functions
// Function	What It Does
// push(x)	Adds element x to the back
// pop()	Removes the element from the front
// front()	Accesses the element at the front
// back()	Accesses the element at the back
// size()	Returns number of elements
// empty()	Checks if queue is empty


//queue operations 
int main(){
    queue<int> q;
    q.push(10);
    q.push(100);
    q.push(110);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.pop(); // removes 10

    cout << "After pop, front: " << q.front() << endl; // should print 100
    

    //let's traverse the queue
    queue<int> temp=q;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    return 0;
}
