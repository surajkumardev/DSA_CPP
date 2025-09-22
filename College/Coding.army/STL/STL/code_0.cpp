#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std; 

// using namespace std;
// name , age, weight
int main(){
    // pair<string, int> p; 
    // p=make_pair("rohit",30);

    // cout<<p.first<<" "<<p.second<<endl; 
    // p.first="rhog";
    // p.second=30;


    pair<string, pair<int, int> > p ; 

    p.first="hfo";
    p.second.first=10;
    p.second.second=34; 
    cout<<p.first<<p.second.first<<p.second.second<<" ";


    pair<pair <string, int> , int> pp; 

    pp=make_pair(make_pair("roght",234),90);


    




    return 0;
}