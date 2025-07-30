#include<iostream>
using namespace std;

int max_element(int arr[],int n){
    int max=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}


int min_element(int arr[],int n){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    //find the max and min element of the array 
    int arr[4];
    int n=sizeof(arr)/sizeof(arr[0]);
    //input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //min element 

    cout<<min_element(arr,4)<<endl;
    cout<<endl;
    cout<<max_element(arr,4);

    
    return 0;
}