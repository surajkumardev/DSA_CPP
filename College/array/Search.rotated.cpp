class Solution {
    public:
        int findPivot(vector<int> &nums, int n) {
            int l = 0;
            int r = n - 1;
    
    
            while (l < r) {
            //check duplicates -> For rotated sorted array 2 
                while(l<r && nums[l]==nums[l+1]){
                    l++;
                }
                while(l<r && nums[l]==nums[r-1]){
                    r--;
                }
                
                //for rotated sorted array 
                int mid = l + (r - l) / 2;
                if (nums[mid] > nums[r]) {
                    l = mid + 1;   // pivot lies on right side
                } else {
                    r = mid;       // pivot lies on left including mid
                }
            }
            return l; // pivot index (smallest element)
        }
    
        int binarySearch(vector<int> &nums, int l, int r, int target) {
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (nums[mid] == target) return mid;
                else if (nums[mid] > target) r = mid - 1;
                else l = mid + 1;
            }
            return -1;
        }
        bool search(vector<int>& nums, int target) {
            //Naive Approach DOn't fucking use this 
            for(int i=0;i<nums.size();i++){
                if(nums[i]==target){
                    return true;
                }
            }
            return false; 
            //optimal Approach 
    
                    int n = nums.size();
            int pivot = findPivot(nums, n);
    
            // search in left half
            int result = binarySearch(nums, 0, pivot - 1, target);
            if (result != -1) return result;
    
            // search in right half
            return binarySearch(nums, pivot, n - 1, target);
    
    
    
        }
    };