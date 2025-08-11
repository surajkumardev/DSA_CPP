#include<iostream>
#include<stack>
using namespace std;
//stack implementation using STL CLASS 
int main(){
    stack<int> s; 
    s.push(10);
    s.push(2);
    s.push(33);
    cout<<"size: "<<s.size()<<endl;
    //top
    cout<<"top:"<<s.top()<<endl;
    s.pop();
    cout<<"top:"<<s.top()<<endl;

    cout<<"EMpty or not" <<s.empty()<<endl;

    //traversing 
    s.push(100);
    s.push(22);
    stack<int> ss=s;
    //
    cout<<"Traversing the stack elments: "<<endl;
    while(!ss.empty()){ //also use the ss.size()!=0
        cout<<ss.top()<<" ";
        ss.pop();
        
    }



    
    return 0;
}