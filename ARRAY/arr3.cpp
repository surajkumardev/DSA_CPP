#include<iostream>
using namespace std;
void passByreference(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*2;
    }
}
int main(){
    int arr[]={10,20,30,40,50};

    int n=5;
    //jist=> pass by reference 
    passByreference(arr,n);
    
    //print 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    //arrays are by default pass by reference means what ever value 
    // we pass the changes are made in the original array not 
    // a copy is not created in this 




    return 0;
}