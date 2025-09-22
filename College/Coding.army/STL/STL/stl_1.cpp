// //jist-> 
// 1. Vector
// 2. Pair
// 3. stack 
// 4. list 
//5. queue
//6. deque

// push 
// pop swap 
// erase 
// size 
// empty
// top 
// emplace_back


// queue
// back front pop push 


// what is priority queue the largest element stays at the top 

// push top pop 



//vectors 
#include <vector>
#include <iostream>
#include<Math.h>
#include<algorithm>
// #include<bits/stdc++.h> //error due to MingW


using namespace std;
class Vec_implementation {
    public: 
    Vec_implementation(vector<int> &vec){
        vec.push_back(324);
        vec.push_back(322);
        vec.push_back(325);
        vec.push_back(326);

    }

    void display(vector<int> vec){
        int n=vec.size();
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
    }
};

// int main() {
//     // Vec_implementation obj(vector<int> vec);
//     // obj.display(); //wrong implementation
//     vector<int> vec;
//     Vec_implementation obj(vec);
//     obj.display(vec);
//     return 0;
// }
int main(){
    vector<int> vec; 
    vec.push_back(19);
    vec.push_back(324);
    vec.push_back(12);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i];
    }
    //now using the sort function 
    // vec.sort(vec.begin(),vec.end());

    sort(vec.begin(),vec.end());
    for(auto i: vec){
        cout<<i<<" ";
    }
    ///works

    // how to sort in descending order  
    // greater<int>() is a predefined comparator in C++ STL.    
    // 🚳sort(vec.begin(),vec.end(),vec<int> desceding>) wrong approcah
    //correct
    sort(vec.begin(),vec.end(),greater<int>());
                                        // () ise na bhule



    return 0;
}