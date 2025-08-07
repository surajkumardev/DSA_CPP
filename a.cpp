#include<iostream>
using namespace std;
int sumof(int n){
    int total=0;
    for(int i=1;i<=n;i++){
        total=total+i;
    }
    return total;
}
int factorail(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*factorail(n-1);
}
int factorail_linear(int n){
    if(n==1 || n==0){
        return 1;
    }
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
bool primeorNot(int n){
    if(n==0 || n==1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}
int sumOfDigit(int n){
    if(n==0) return 0;
    int sum=0;
    while(n>0){
        int rem=n%10;
        sum+=rem;
        n=n/10;
    }
    return sum ;
}

int main() {
    int n=5;
    int ans=sumof(n);
    cout<<ans<<endl;
    int a=factorail(n);
    int b=factorail_linear(n);

    cout<<a<<b<<endl;

    cout<<primeorNot(13);
    cout<<primeorNot(14);
    cout<<primeorNot(19);
    if(primeorNot(10)==0){
        cout<<"False"<<endl;
    }

    cout<<sumOfDigit(123);








    return 0;
    //how to compile and run on powershell:
    //g++ a.cpp
    //.\a.exe 
    //or ./a.exe

}
