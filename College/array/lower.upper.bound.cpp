#include <iostream>
#include <vector>
using namespace std;

int upper_bound(vector<int>& vec, int target) {
    int n = vec.size();
    int low = 0, high = n;
    int ans = n;  // default: not found, return end()

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (vec[mid] > target) {
            ans = mid;
            high = mid;   // look left for earlier > target
        } else {
            low = mid + 1; // move right
        }
    }
    return ans; // index of first element which is > target
}
int lower_bound(vector<int> &vec,int target){
    int n=vec.size();
    int low=0,high=n;
    int ans=n; 

    while(low<high){
        
    }
}
        auto it = lower_bound(arr.begin(), arr.end(), target);
        lower_bound(first, last, x) → //returns iterator to first element ≥ x.
      //  If no such element exists → returns arr.end().


         auto it = upper_bound(arr.begin(), arr.end(), tarxget);
         upper_bound(first, last, x) //→ returns iterator to first element > x.
       //  If no such element exists → returns arr.end().

int main() {
    vector<int> nums = {1, 3, 5, 6};

    cout << upper_bound(nums, 5) << endl; // 3 (points to 6)
    cout << upper_bound(nums, 2) << endl; // 1 (points to 3)
    cout << upper_bound(nums, 7) << endl; // 4 (end)

    return 0;
}
