//use of the deque (double ended queue ) note dequeue != deque

// A deque allows insertion and deletion from both ends — front and back.
// push_back(x)	dq.push_back(1);	Add element at the back
// push_front(x)	dq.push_front(2);	Add element at the front
// pop_back()	dq.pop_back();	Remove from the back
// pop_front()	dq.pop_front();	Remove from the front
// front()	dq.front();	Access front element
// back()	dq.back();	Access back element
// size()	dq.size();	Number of elements
// empty()	dq.empty();	Check if empty

#include<iostream>
#include<queue>
#include<utility>
#include<algorithm>
#include<deque>
using namespace std; 

int main(){
    //note the deque supports iterations
    deque<int> dq; 
    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(12);
    cout<<"Front: "<<dq.front()<<endl;
    cout<<"Back: "<<dq.back()<<endl;

    dq.pop_front();  //remove removes the 5 
    cout<<"after pop_front "<<dq.front()<<endl;

    dq.pop_back();
    cout<<"after pop_back, back: "<<dq.back()<<endl;

    

    return 0;
}
