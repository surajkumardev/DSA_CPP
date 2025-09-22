#include<iostream>
using namespace std;
int main(){
    //the use of pointer in handling the array 
    //Traversing the array using the pointer
    int arr[]={10,20,30,40};
        int * ptr=arr;
    for(int i=0;i<4;i++){
        cout<<*(ptr+i)<<" ";
    }
    //NULL POINTer
    int* ptrr=nullptr;
    cout<<*ptrr;



    return 0;
}
