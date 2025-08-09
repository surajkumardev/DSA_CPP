#include<iostream>
#include<vector>

using namespace std;

bool binaryRec(vector<int> vec, int target,int start, int end ){
    // int start=0;
    // int end=vec.size()-1;
    if(start>end){
        return false;
    }
    int mid=start+(end-start)/2;
    if(target==vec[mid]){
        return true;
    }else if(vec[mid]>target){
        return binaryRec(vec,target,start,mid-1);
    }else{
        return binaryRec(vec,target,mid+1,end);
    }
    //  by default value is must in recursion
}

int main(){
    vector<int> vec={10,20,30,40,50};
    int target=100;
    int end=vec.size();
    bool ans=binaryRec(vec,target,0,end);
    if(ans==true){
        cout<<"yes"<<endl;
    }else{
        cout<<"FALSE";
    }

    return 0;

}