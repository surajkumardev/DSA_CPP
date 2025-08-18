#include<iostream>
#include<list> 

using namespace std; 


int main(){
    //linked list -> list 
    list<int> l; 
    l.push_back(130);
    l.push_front(34);
    l.size();
    l.pop_back();
    l.push_back(324);
    //traverseing
    for(auto i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
        for(auto i=l.rbegin();i!=l.rend();i++){
        cout<<*i<<" ";
    }
    return 0 ;
}