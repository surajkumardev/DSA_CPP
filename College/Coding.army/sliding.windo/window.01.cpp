// Day 35 --sliding window -> 20-09-27
//Creating the structure of the tree 
#include <iostream>
#include <vector>
#include<queue> 
using namespace std;


//Question-1st Zero Sum Subarray 
//Brute Force=>O(n3) TLE
class Solution {
    public:
      int findSubarray(vector<int> &arr) {
          // code here.
          int count=0;
          //prefix sum
          int n=arr.size();
          for(int i=0;i<n;i++){
              for(int j=i;j<n;j++){
                  int sum=0;
                  for(int k=i;k<=j;k++){
                      sum=sum+arr[k];
                  }
                      if(sum==0){
                      count++;
                  }
              }
          }
          return count; 
      }
};

Better Approach=>O(n2) TLE
class Solution {
    public:
      int findSubarray(vector<int> &arr) {
          // code here.
          int count=0;
          for(int i=0;i<arr.size();i++){
              int sum=0;
              for(int j=i;j<arr.size();j++){
                  sum=sum+arr[j];
                  if(sum==0){
                      count++;
                  }
              }
          }
          return count;
      }
  };
//Optimal Approach=>O(n) 
  class Solution {
    public:
      int findSubarray(vector<int> &arr) {
          // code here.
          int total=0;
          unordered_map<int, int> mp; 
          int prefixSum=0; 
          
          mp[0]=1; //(0,1)
          
          for(int i=0;i<arr.size();i++){
              prefixSum+=arr[i];
              if(mp.count(prefixSum)){
                  total+=mp[prefixSum];
                  mp[prefixSum]++;
              }
              else{
                  mp[prefixSum]=1;
              }
          }
          return total; 
          
      }
  };
560. Subarray Sum Equals K----------Leetcode
//Brute Force -> Time Complexity of o(n2) -> BAD OPTIMISE IT
class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            int count=0;
            int n=nums.size();
            for(int i=0;i<n;i++){
                int sum=0;
                for(int j=i;j<n;j++){
                    sum=sum+nums[j];
                    if(sum==k){
                        count++;
                    }
                }
            }
            return count;
        }
    };
//Optimal Approach using the Prefix sum {SUM OF THE SUBARRAY}
class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            int count=0; 
            int n=nums.size();
            int prefixSum=0;
            unordered_map<int, int> mp; 
            mp[0]=1; //must before hand is 0
            for(int i=0;i<n;i++){
                prefixSum=prefixSum+nums[i]; 
                if(mp.count(prefixSum-k))
                { //count when you have seen prefixSum-k before 
                    count=count+mp[prefixSum-k];
                    mp[prefixSum]++;
                }else{
                    mp[prefixSum]++;
                }
            }
            return count; 
        }
};
    


