#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string st = "hello";
    reverse(st.begin(), st.end());
    cout << st; // Output: olleh
}
