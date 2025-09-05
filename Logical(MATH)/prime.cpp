#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;

        }
    }
    if(count==2){
        cout<<"Yes";
    }else{
        cout<<"NO";
    }
    
    return 0;
}
//Other
// main()

// code.cpp
// #include <iostream>
// using namespace std;

// int main() {
// int n = 7;
// bool isPrime = true;

// for(int i=2; i <= n-1; i++) {
// if(n % i == 0) { //non prime
// isPrime = false;
// break;

// if(isPrime == true) {
// cout << "prime no\n";
// } else {
// cout << "non prime no\n";

// return 0;