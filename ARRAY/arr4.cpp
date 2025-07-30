#include<iostream>
using namespace std;
//linear search -> Jist
int Ls(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){

    int arr[]={10,2342,4324,234234,23432,4,324};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int ans=Ls(arr,n,121);
    if(ans==-1){
        cout<<"The element is not found"<<endl;
    }
    else{
        cout<<"THE element is found"<<endl;
    }


    return 0;
}