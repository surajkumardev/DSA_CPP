#include <iostream> 
#include <vector> 
#include <queue> 
#include <list>
#include <unordered_set>
#include <set> 
#include <map> 
#include <unordered_map> 
using namespace std; 

int main() {
    unordered_map<int, string> mp; 

    vector<int> arr = {10, 20, 40, 50, 60};
    vector<string> str = {"ten", "twenty", "forty", "fifty", "sixty"};

    // Fix: use index instead of value
    for (int i = 0; i < arr.size(); i++) {
        mp[arr[i]] = str[i];
    }

    cout << endl;

    // Print map
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }

    cout << endl;

    // Print vector
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
