#include<iostream>
using namespace std;
    int fuck(int n){
        return n*n;
    }
       void hello(){
        cout<<"sdf";
    }
int main(){
    //creating a function 

    //calling 
    //     void hellso(){
    //     cout<<"sdf";
    // }
    hello();
    int n=5;
    int ans=fuck(n);
    cout<<ans<<endl;
    auto square = [](int n) { return n * n; };  // Lambda inside main
    return 0;
}
//Lamda function=> C++ does allow lambda functions, which are like inline anonymous functions.

