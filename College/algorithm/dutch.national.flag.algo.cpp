    // ✅ Dutch National Flag Algorithm (Optimal)

//sort colors Important Interview Question
//we can also solve this problem using Sorting algorithm 
//like bublble, selection 

    class Solution {
public:
    void sortColors(vector<int>& nums) { //0, 1, 2 => input 
        // ✅ Dutch National Flag Algorithm (Optimal)
        int n = nums.size();
        int i = 0;     // pointer for 0
        int j = 0;     // pointer for current element 1 
        int k = n - 1; // pointer for 2

        while (j <= k) {
            if (nums[j] == 1) {
                j++;
            } else if (nums[j] == 2) {
                swap(nums[j], nums[k]);
                k--;
            } else { // nums[j] == 0
                swap(nums[j], nums[i]);
                j++;
                i++;
            }
        }
    }
};
