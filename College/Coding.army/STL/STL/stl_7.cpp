// use of the {map, set, unOrdered Map}
#include<iostream>
#include<set>
#include<algorithm>
#include<utility>
#include<map>

// | Feature         | `map`                         | `unordered_map`              |
// | --------------- | ----------------------------- | ---------------------------- |
// | Order           | **Sorted by key** (ascending) | **No order** (random)        |
// | Internally uses | Red-Black Tree (Balanced BST) | Hash Table                   |
// | Time Complexity | `O(log n)`                    | `O(1)` average, `O(n)` worst |
// | Header          | `#include <map>`              | `#include <unordered_map>`   |
// | Duplicate keys? | ❌ No                          | ❌ No                         |


//Operations 
// Operation	Syntax	Meaning
// Insert/Assign	m[key] = value;	Insert or update
// Access	m[key]	Get value for a key
// Erase	m.erase(key);	Remove key-value pair
// Find	m.find(key)	Returns iterator if found
// Size	m.size();	Number of elements
// Traverse	for (auto x : m)	Loop through key-value pairs

using namespace std;
int main(){
    map<string, int> m; 
    m["apple"]=9; 
    m["canana"]=11;
    m["brange"]=7;

    for(auto p: m){
        cout<<p.first<<" -> "<<p.second<<endl; 
    }
    // output sorted by the key
// apple -> 9
// brange -> 7
// canana -> 11


    return 0;
}