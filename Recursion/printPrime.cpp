#include<iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num){
    if(num < 2) return false; //no  
    for(int i = 2; i*i <= num; i++){ //
        if(num % i == 0)
            return false;
    }
    return true;
}
bool checkPrime(int num){
    if(num<2){
        return false; 
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false; 
        }
    }
    return true; 
}

int main(){
    int n;
    cin >> n;

    cout << "Prime numbers from 2 to " << n << " are:\n";
    for(int i = 2; i <= n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
