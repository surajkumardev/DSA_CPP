#include<iostream>
using namespace std;
//recursion
int factf(int n){
    // int fact=1;
    if(n==1|| n==0){
        return 1;
    }
    return n*factf(n-1);
}
int main(){
    int fact=1;
    int n=6;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact<<endl;
    cout<<factf(5)<<endl;
    return 0;

}