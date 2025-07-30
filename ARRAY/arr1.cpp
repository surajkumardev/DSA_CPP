#include<iostream>
using namespace std;

int main() {
    int arr[2];
    //size 
    int n=sizeof(arr)/sizeof(arr[0]);
    //input
    for(int i=0;i<2;i++){
        cin>>arr[i];
    }

    //printing 
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;

    //output 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
