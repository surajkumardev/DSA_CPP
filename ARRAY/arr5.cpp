#include<iostream>
using namespace std;
// Jist=> Reverse the array using two pointer approcah 
//in this we have a start and end pointer 
//start -> 0 
//end -> n-1

//Logic
void arr_reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    //logic usin the swap function 

    arr_reverse(arr,n);

    //print the array 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0; 
}

