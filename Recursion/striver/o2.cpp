//sum of first n natural number 
// using recursion


// jist=>{
//     1. Return Sumofn Natural nUmber; 

// }

#include<iostream> 
using namespace std; 

void sumofN(int i, int sum){
    if(i<1){
        cout<<sum<<" ";
        return;
    }
    sumofN(i-1,sum+i);
}


int sumofNrec(int n, int i){
    int sum=0;

    if(i<1){
        return ;
    }

         sum=sum+i;

    return sum; 


    sumofNrec(n, i-1);
}


int main(){
    int n=5; 
   sumofN(3,0);
    return 0;
}