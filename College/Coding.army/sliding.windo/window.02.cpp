#include <vector>
#include <unordered_map>
Question 1. LEETCODE-> SUB ARRAY SUM DIVISIBLE BY K 
class Solution {
    public:
        int subarraysDivByK(vector<int>& nums, int k) {
            ///brute force 
            int n=nums.size();
            int count=0;
            for(int i=0;i<n;i++){
                int sum=0;
                for(int j=i;j<n;j++){
                    sum=sum+nums[j];
                    if(sum%k==0){
                        count++;
                    }
                }
            }
            return count;
        }
    };



Question-2 LEETCODE ->MAX SUBARRAY SUM 
//NAIVE =O{n2}
class Solution {
    public:
            int maxSubArray(vector<int>& nums) {
                int maxSum=nums[0];
                if(nums.size()==0){
                    return 0;
                }
                int n=nums.size();
                for(int i=0;i<n;i++){
                    int sum=0;
                    for(int j=i;j<n;j++){
                        sum=sum+nums[j];
                    maxSum=max(sum,maxSum);
        
                    }
                }
                return maxSum;
        
            }
        };