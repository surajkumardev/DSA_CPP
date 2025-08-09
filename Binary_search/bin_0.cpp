#include<iostream>
#include<vector>

using namespace std;
// Returning -1 will still compile,
//  but it will be implicitly c
//  onverted to true 
//  (since any non-zero value in C++ is considered true).
//The array has to be sorted

bool binarySearch(vector<int> vec, int target){
    int start=0;
    int end=vec.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(target==vec[mid]){
            return true; 
        }
        else if(target>vec[mid]){
            //right half
            start=mid+1;
        }else{
            //left half
            end=mid-1;
        }
    }
    return false;
}

int main() {
    //binary search 
    vector<int> vec={10,20,30,40 ,50, 60};// Array need to be sorted 
    int target=190; 
    
    bool ans=binarySearch(vec,target);
    if(ans==true){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}

