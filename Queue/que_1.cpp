//Queue Implementation Using STL

#include <iostream>
#include <queue> //to import the queue in the stl 
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;
    cout << "Rear: " << q.back() << endl;

    q.pop();

    cout << "Front after pop: " << q.front() << endl;

    return 0;
}
