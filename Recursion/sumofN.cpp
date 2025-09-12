#include<iostream>
using namespace std;
int sumofN(int n){
    if(n==0){
        return 0;
    }
   return n+sumofN(n-1);
}
int sumof(int n){
    int total=0;
    for(int i=1;i<=n;i++){
        total=total+i;
    }
    return total;
}
int main(){
    int n=5;
    int ans=sumof(n);
    int ab=sumofN(n);
    cout<<ans<<endl;
    cout<<ab<<endl;

    return 0;
}