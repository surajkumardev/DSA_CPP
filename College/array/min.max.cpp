#include <iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int maximum(vector<int> vec) {
    int n = vec.size(); 
    int mx = vec[0]; 
    for(int i = 1; i < n; i++) {
        if(vec[i] > mx) {
            mx = vec[i];
        }
    }
    return mx; 
}

int minimum(vector<int> vec) {
    int n = vec.size(); 
    int mn = vec[0]; 
    for(int i = 1; i < n; i++) {
        if(vec[i] < mn) {
            mn = vec[i];
        }
    }
    return mn;
}

int main() {
    vector<int> v = {10, 3, 45, 2, 99, 7};



    int mn = *min_element(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());
    cout<<"minimum"<<mn<<endl; 
    cout<<"maximum "<<mx<<endl; 
    cout << "Maximum: " << maximum(v) << "\n";
    cout << "Minimum: " << minimum(v) << "\n";

    return 0;
}
