//count Number of Digits in number
#include<iostream>
using namespace std;
int goDigit(int n){
    if(n==0) return 1;
    int count=0;
    while(n>0){
        int rem=n%10;
        n=n/10;
        count++;
    }
    return count;
}
//sum of numbers
int sumDigit(int n){
    if(n==0) return 0;
    int sum=0;
    while(n>0){
        int rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;cin>>n;
    int ans=goDigit(n);
    cout<<ans<<endl;
    int asn=sumDigit(n);
    cout<<asn<<endl;
    return 0;
}