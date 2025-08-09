#include<iostream>
#include<vector>
using namespace std; 
// jist-> Majority Element  *******************************MOOOORE ALGORITHM********************************
// brute force->  The element is called the majority element when it appears more than n/2 times
// time complexity->There is only one element that appears more than 1/2 number of times 

//optimal approach -> Using two pointer approach 
//idndentify -> identify the two pointer / binary search if the array is sorted 
//approcah 
//Time compelxity-> 

//brute force approach code 
int MajorityElement(vector<int> vec) {
    int n = vec.size();
    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        int freq = 1; // count current element itself {why we keep the freq=1 inside the loop not outside the loop}
        for (int j = i + 1; j < n; j++) {
            if (vec[i] == vec[j]) {
                freq++;
            }
        }
        if (freq > mid) {
            return vec[i];  // return the majority element
        }
    }
    return -1; // no majority element found
}
