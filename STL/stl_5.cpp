//STL implementaion of {List}
// ✅6. list (Doubly Linked List in STL)
// std::list is a doubly linked list in C++. It allows:
// Fast insertion/deletion from both ends
// Bidirectional traversal
// Slower random access (unlike vector)
// 🔹 Common Operations:
// Operation	Description
// push_back(x)	Add at end
// push_front(x)	Add at front
// pop_back()	Remove from end
// pop_front()	Remove from front
// size()	Number of elements
// empty()	Check if list is empty
// erase(pos)	Remove element at position
// clear()	Remove all elements
// begin() / end()	Iterators for traversal


#include<iostream>
#include<vector>
#include<utility>//used to implement the pairs 
#include<stack>
#include<queue>
#include<list>

using namespace std;
int main(){
    list<int> ll;
    ll.push_back(10);
    ll.push_back(120);
    ll.push_back(11);
    ll.push_back(121);

    cout<<"list:" <<endl;
    //traversal 
    for(int x: ll){
        cout<<x<<endl;
    }
    ll.pop_back(); //10 get poped out 
    ll.pop_front(); //121 get poped out 
    
    
    cout << "After popping front and back: ";
    for (int x : ll) {
        cout << x << " ";
    }
    //push_font 

    ll.push_front(1111);
    //push_back
    ll.push_back(11111);
    cout << "After Pushing front and back: ";
    for (int x : ll) {
        cout << x << " ";
    }
    //now do the traversal 
    // queue<int> temp=ll;

    return 0;
}

