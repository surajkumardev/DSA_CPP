//jist->  how to reverse a array using two pointer approach 
//Time complexity
#include<iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main() {
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    //output -> 60 50 40 30 20 10 
return 0;
}