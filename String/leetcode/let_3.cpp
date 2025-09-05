// Permutations of given String
// Given a string s, the task is to return all permutations of a given string in lexicographically sorted order.

// Note: A permutation is the rearrangement of all the elements of a string. Duplicate arrangement can exist.

// Examples:

// Input:  s = "ABC"
// Output: "ABC", "ACB", "BAC", "BCA", "CAB", "CBA"

// Input: s = "XY"
// Output: "XY", "YX"

// Input: s = "AAA"
// Output: "AAA", "AAA", "AAA", "AAA", "AAA", "AAA" 

// Try it on GfG Practice
// redirect icon
// The idea is to use backtracking to generate all possible permutations of given string s. To do so, first initialize an array of string ans[] to store all the permutations. Start from the 0th index and for each index i, swap the value s[i] with all the elements in its right i.e. from i+1 to n-1, and recur to the index i + 1. If the index i is equal to n, store the resultant string in ans[], else keep operating similarly for all other indices. Thereafter, swap back the values to original values to initiate backtracking. At last sort the array ans[].

// illustration:

// 4
// Below is the implementation of the above approach:




// C++ Program to generate all unique
// permutations of a string
#include <bits/stdc++.h>
#include<iostream> 
#include<algorithm> 

using namespace std;
// Recursive function to generate 
// all permutations of string s
void recurPermute(int index, string &s,
                    vector<string> &ans) {
    // Base Case
    if (index == s.size()) {
        ans.push_back(s);
        return;
    }
    // Swap the current index with all
    // possible indices and recur
    for (int i = index; i < s.size(); i++) {
        swap(s[index], s[i]);
        recurPermute(index + 1, s, ans);
        swap(s[index], s[i]);
    }
}
// Function to find all unique permutations
vector<string> findPermutation(string &s) {
    // Stores the final answer
    vector<string> ans;

    recurPermute(0, s, ans);

    // ort the resultant vector
    sort(ans.begin(), ans.end());

    return ans;
}

int main() {
    string s = "ABC";
    vector<string> res = findPermutation(s);
    for(auto x: res) {
        cout << x << " ";
    }
    return 0;
}

// Output
// ABC ACB BAC BCA CAB CBA 
// Time Complexity: O(n * n!)
// Auxiliary Space: O(n!)