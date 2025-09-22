#include <iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 2, 3, 1, 4, 2};

    map<int,int> freq; // element -> count mapping

    for (int x : nums) {
        freq[x]++;  // increment frequency
    }

    // Print frequency
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}

//Majrity Element-> 

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp ; 
        //space -> o(n) //bad not work in interview 
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     mp[nums[i]]++; //store the 
        // }
        for(auto x: nums){
            mp[x]++;
        }
        for(auto it: mp){
            if(it.second>(n/2)){
                return it.first;
            }
        }
    return -1;
        
    }
};
