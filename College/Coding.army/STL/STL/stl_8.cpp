//Unordered Map => it does not give the sorted formate 
// based on the key 
#include<iostream>
#include<unordered_map>
using namespace std; 

int main(){
    unordered_map<string, int> um; 
    um["applie"]=15;
    um["banana"]=23;
    um["Sakarkand"]=2;

    for(auto p: um ){
        cout<<p.first<<" -> "<<p.second<<endl; 
    }
    
    
    return 0;
}