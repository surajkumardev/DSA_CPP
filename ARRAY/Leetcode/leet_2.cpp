#include<iostream>
#include<vector>
using namespace std; 
// jist-> 136. Single Number
// link-> https://leetcode.com/problems/single-number/description/
// brute force-> when i hear the single number (xor) operator should come in your mind that help to find the unique values in the array 
// time complexity-> O(n) (one time loop)
// optimal -> USE the xor operator
// time complexity-> O(n) Linear Time complexity


int singlenumber(vector<int> &vec){
    int ans=0;
    int n=vec.size();
    for(auto i: vec){
        ans=ans^i;
    }
    return ans;

}

int main(){
    vector<int> vec={19,29,30,30,29};
    int ans=singlenumber(vec);
    cout<<ans<<endl;
    
    
    return 0 ;
}





//LEETCODE -> 136 Single NUmber
// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans=0;
//         for(auto i: nums){
//             ans=ans^i;
//         }
//         return ans; 
//     }
//     //in this we can use the simple property of xor
//     //that helps in find the unique values 
// };