//example of recrusion using the facebook birthday 
#include<iostream>
using namespace std;

//prime number program in underoort N
int sumOfDigit(int n){
    if(n==0) return 0;
    int sum=0;
    while(n>0){
        int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum; 
}

bool primeNumber(int n){
    if(n==1|| n==0){
        return false; 
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    bool answer=primeNumber(10);
    cout<<answer<<endl;
    return 0;
}