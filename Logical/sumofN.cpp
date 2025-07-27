#include<iostream>
using namespace std;
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
    cout<<ans<<endl;
    return 0;
}