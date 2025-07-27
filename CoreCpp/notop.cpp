//not operator

#include<iostream>
using namespace std;
int main(){
    //example
    int n=5;
    if(n!=5){
        cout<<"hello";
    }else{
        cout<<"er"<<endl;
    }
    //not
    cout<<!(3<2)<<endl;
    //logical Operators example
    // or and not 
    //or
    int a=5, b=10;
    if(a%2==0 || b%2==0){
        cout<<"Yes even ";
    }else{
        cout<<"NOt even ";
    }
    //and
    // int a=5, b=10;
    if(a%2==0 && b%2==0){
        cout<<"Yes even ";
    }else{
        cout<<"NOt even ";
    }
    //uranary Operators
    int i=5;
    int c=++i;
    int d=i++;
    cout<<c<<d<<endl;


    return 0;
}