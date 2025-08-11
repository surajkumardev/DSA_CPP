//example of recrusion using to from n to 1 
#include<iostream>
using namespace std;
void print(int n){
    
    if(n==1){ //base case must other wise stack overflow happends
        cout<<1<<endl;
                return ; 
    }
    cout<<n<<endl;
    print(n-1);
}
int main(){
    print(6);
    return 0;
}