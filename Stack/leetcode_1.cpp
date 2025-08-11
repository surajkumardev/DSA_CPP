// Reverse array 
#include<string>
#include<stack>
#include<vector>
using namespace std; 
//approcah -> 
// first insert the element into the stack 
//then push those element into the array 
//now the array is reversed 

// User function Template for C++
// Tom is a string freak. He has got sequences of words arr[] to manipulate. If in a sequence,
//  two same words come together then Tom destroys each other. Find the number of words left 
//  in the sequence after this pairwise destruction. Examples: Input: arr[] = ["ab", "aa", "aa", "bcd", "ab"]
//   Output: 3 Explanation: After the first iteration,
//   we'll have: ab bcd ab.
//    We can't further destroy more strings and hence we stop and the result is 3.
class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // Your code goes here
        stack<string> st; 
        for(int i=0;i<arr.size();i++){
            if(st.empty()){
                st.push(arr[i]);
            }
            else if(st.top()==arr[i]){
                st.pop();
            }
            else
            st.push(arr[i]);
        }
        return st.size();
        
    }
};