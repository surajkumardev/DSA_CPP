//deque using STL deque NOTE=> deque != (dequeue)
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    dq.pop_front();

    cout << "Front after pop: " << dq.front() << endl;

    return 0;
}
