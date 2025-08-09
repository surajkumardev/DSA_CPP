#include<iostream>
#include<cstring>
#include<string>
#include<vector>
using namespace std;


int main(){
    string name="suraj";
    cout<<name<<" ";
    string s1="hello";
    string s2("world");
    string s3;

    ///input 
    string names;
    // cin>>names;

    //optimal input will also take the space separated 
    string s;
    // cin.getline(sentecn,100);
    getline(cin,s);

    ///iterating through string 
    // for(char c: s){
    //     cout<< c<<" ";
    // }
    //using for indexing 
    // for(int i=0;i<s.length();i++){
    //     cout<<s[i]<<" ";
    // }
    // cout<<s.substr(0,5);
    
    //can also loop through using 
    for(int i=0;i<'\0';i++){ //wrong w❌❌
        cout<<s[i]<<" ";
    }
    //correct approach
    for(int i=0;s[i]!='\0';i++){
        cout<<s[i]<<" ";
    }
    

    return 0;
}