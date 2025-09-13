// //linear search -> Jist
// #include<vector>
// int Ls(int arr[],int n,int x){
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             return i;
//         }
//     }
//     return -1;
// }
.


// void arr_reverse(int arr[],int n){
//     int start=0;
//     int end=n-1;
//     while(start<end){
//        // swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
//some Common Things to note 
// largest sum of any subarray is minimized.
binary_search(begin, end, x) → checks if x exists
lower_bound(begin, end, x) → gives first index where x can be inserted (leftmost occurrence)
upper_bound(begin, end, x) → gives first index greater than x (rightmost occurrence + 1)

// bool binarySearch(vector<int> vec, int target){
//     int start=0;
//     int end=vec.size()-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(target==vec[mid]){
//             return true; 
//         }
//         else if(target>vec[mid]){
//             //right half
//             start=mid+1;
//         }else{
//             //left half
//             end=mid-1;
//         }
//     }
//     return false;
// }

{
    important-> 
    1. Lower bound condition -> the first element which is greater than the target 
    2. uppper bound conditon - the first element which is greater thatn the
        auto it = lower_bound(arr.begin(), arr.end(), target);
        lower_bound(first, last, x) → returns iterator to first element ≥ x.
        If no such element exists → returns arr.end().


         auto it = upper_bound(arr.begin(), arr.end(), tarxget);
         upper_bound(first, last, x) → returns iterator to first element > x.
         If no such element exists → returns arr.end().
}
//example-> 

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // use lower_bound because it gives position of >= target
        auto it = lower_bound(nums.begin(), nums.end(), target);
        return it - nums.begin();  // index of insertion
    }
};





//binary Search 
#include<iostream>
#include<vector> 
using namespace std; 
bool binarySearch(vector<int> arr,int target){
    //3-> start, end , mid 

    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid=(start)+(end-start)/2;
        if(arr[mid]==target){
            return true;
        }
        else if(arr[mid]>target){
            //two thing 
            //left half
            end=mid-1;
        }
        else{
            //right half
            start=mid+1;
        }
    }

    return false;

}
//recursive code 

bool recbinarySearch(vector<int> &arr, int target,int start, int end){

    if(start>end){ ///base case 
        return false; 
    }
    int mid=start+(end-start)/2; 
    if(target==arr[mid]){
        return true; 
    }else if(target>arr[mid]){
      return  recbinarySearch(arr,target, mid+1, end );
    }else{
        return recbinarySearch(arr, target,start, mid-1);
    }
}
