///imlentation of {stack} and using operation like push pop peek empty

// Operation	Meaning
// push(x)	Insert element on top
// pop()	Remove the top element
// top()	Get the top element
// size()	Number of elements
// empty()

//let's try 

#include<iostream>
#include<stack>
#include<vector>
using namespace std; 
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // for(auto i: st){
    //     cout<<i<< " ";
    // }
    for(int i=0;i<st.size();i++){
        cout<<st.top();
    }

    //pop //40 will be popped 

    st.pop();
    
    // for(auto i: st){
    //     cout<<i<< " ";
    // }

    //top
    cout<<st.top(); //30 

    cout<<st.size()<<endl; //3

    cout<<st.empty()<<endl;

    //Notes-> The stack does not support direct traversal like vector or array we 
    // can print the top element and pop the element simuntaneously while (!stack.empty())
    cout<<"The stack element are as followign "<<endl; 
    //you should create a copy not the original one 
    stack<int> copy_one=st;
    while(!copy_one.empty()){
        cout<<copy_one.top()<<endl;
        copy_one.pop();
    }

    




    
    return 0;
}

