#include <iostream>
#include<vector>
#include<stack>
#include<queue>


using namespace std;


// Due to his peculiarities, Vlad can only add characters to the beginning of the word,
//  while Dima can only add them to the end. They add characters in the order they appear in string b
// . Your task is to determine what string Vlad and Dima will end up with.

int main(){
    int t; 
    cin>>t; 
    while(t--> 0){
        int n;  //2
        cin>> n; 
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x; 
        int y; 
        int z=1; 
        int rev=1; 
        for(int i=1;i<n;i++){
            x=arr[i]; 
            y=arr[i+1]; 
            rev=(x/y)*z; 
        }
        if(rev==1){
            cout<<"YES"; 
        }else{
            cout<<"NO"; 
        }
    }
    
    return 0;


}