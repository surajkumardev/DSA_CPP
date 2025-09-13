//Sorting Algorithm 
#include<iostream>
#include<vector>
using namespace std; 

void BubbleSort(vector<int> &arr){
    //what is buble keep swap if the elemenet on right is smaller 
    //n2 
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size()-i-1;j++){ //array out of bound as you are checking the last element at last
            // arr[j] then arr[j+1] which is the worst 
            //use j<n-i-1; 
            //after each pass, the largest element bubbles to the end, so no need to check again.
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }


}
int main(){
    vector<int> vec={9,8,7,6,5,4,3,2,1};


    BubbleSort(vec);



    int n=vec.size(); 
    for(int it: vec){
        cout<<it<<" ";
    }
    cout<<endl; 

    return 0;

}