#include<iostream>
#include<vector>
using namespace std; 
// jist-> Maximum Subarray Sum 
// brute force->  Use the 
//Total number of sums -> n(n+1)/2
// time complexity->O(n2)

// optimal -> uSe the Kadanes Algorithm of the maximum subarray sum 
// time complexity-> O(n)
// Kadane’s algorithm works by keeping track of:
// Current sum: The best sum ending at the current element.
// Max sum: The best sum found so far anywhere in the array.

//Brute force code
//Learn in the class 
// int maxSUm=INT_MIN;
// for(int st=0;i<end;i++){
//     int currSum=0;
//     for(int end=st; end<n;end++){
//         currSum +=arr[end];
//         maxSum=max(currSum, maxSum);
//     }
// }

//optimal code
int maxSum(vector<int> &vec) {
    int currentSum = 0;
    int maxSum = vec[0];
    for (auto i : vec) {
        currentSum += i;
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}
