//How do you remove {duplicate elements} in the 
//vector while preserving the {order}
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> v = {4, 2, 1, 2, 4, 3};

    set<int> s(v.begin(), v.end()); // removes duplicates and sorts

    vector<int> result(s.begin(), s.end()); // back to vector

    for (int x : result) {
        cout << x << " ";
    }
}



