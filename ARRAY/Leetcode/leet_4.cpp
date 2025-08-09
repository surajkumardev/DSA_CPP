#include<iostream>
#include<vector>
using namespace std; 
// jist-> pair sum // Two sum 
// brute force->  use the o(n2) nested loop one from i to n and other from i+1 to n and sum the arr[i]+arr[j]==sum return the index
// time complexity->O(n2)

//optimal approach -> Using two pointer approach 
//idndentify -> identify the two pointer / binary search if the array is sorted 
// //approcah -> 
// we have two pointer 
// one is the first with i=1 smallest
// one is the last with j=n largest as the array is sorted 
 
// now the we do the pair sum 
// cases 
// if(parisum>target){
//     j--;
// }if(pairsu<target){
//     i++;
// }else{
//     pairsum==target;
//     vec.push_back(i);
//     vec.push_back(j);
// }

//Time compelxity-> 

//brute force approach 
// vector<int> pariSUm(vector<int> vec, int req){
//     vector<int> ans; 
//     for(int i=0;i<vec.size();i++){
//         for(int j=i+1;j<vec.size();j++){
//             if(vec[i]+vec[j]==req){
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }
//     return ans;
// }
//optimal appraoch using two pointer 
vector<int> pariSUm(vector<int> vec, int req){
    vector<int> ans; 
    int i=0;
    int j=vec.size()-1;
    while(i<j){
        if(vec[i]+vec[j]<req){
            i++;
        }else if(vec[i]+vec[j]>req){
            j--;
        }
        else{
            //equal case
            ans.push_back(i);
            ans.push_back(j);
            return ans;// return it after pushing 
            
        }
    }
    return ans;

}
int main(){

    vector<int> vec={1,2,7,9};
    int req=3;

    vector<int> ans=pariSUm(vec,req);
    for(auto i: ans){
        cout<<i<<"  ";
    }

    return 0;
}