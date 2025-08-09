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
int MajorityElement(vector<int> vec){
        vector<int> ans; 
        int freq=0;
        int n=vec.size();
        for(int i=0;i<n;i++){

            for(int j=i+1;j<n;j++){
                if(ans[i]==ans[j]){
                    freq++;
                }
            }
        }
        int mid=n/2;
        if(freq>mid){
            return freq;
}



}