//sum of first n natural number 
// using recursion


#include<iostream> 
using namespace std; 

void sumofN(int i, int sum){
    if(i<1){
        cout<<sum<<" ";
        return;
    }
    sumofN(i-1,sum+i);
}
int main(){
    int n=5; 
   sumofN(3,0);
    return 0;
}