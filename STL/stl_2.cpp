//pair and Vectors 
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<utility> //for pairs 
using namespace std;


int main(){

    vector<int> vec;
    vector<int> vec2={23440,234234234,324,32,4324,32};
    vector<int> vec1(5,1000);
    //ways to define vector


    vector<int> vesc;
    vector<int> vecc={90,234,234234};
    vector<int> vec2(5,100);
    //segmentation error-> when we try to access 
    // the value of the vector that is not present 
    // like vec[0] will give a error 
    // when vec[0] does not contain any thing/

    

    //now pair can contain all types of value like key: value pair in dbms

    vector<pair<int,string>> v;

    vector<pair<int,string>> v1;
    v1.push_back(make_pair(1,"fuck"));
    v.push_back(make_pair(1,"push")); //uses make_pair 
    v.emplace_back(2,"emplace"); //   // constructs in-place

    for(auto p: v){
        cout<<p.first<<" "<<p.second<<endl;
    }
    for(auto p: v){
        cout<<p.first<<" "<<p.second<<endl; 
    }


    vector<int> ve;
    ve.emplace_back(10);
    ve.emplace_back(23);
    ve.emplace_back(234);

    vector<int> vecss;
    vecss.push_back(10);
    vecss.push_back(100);
    vecss.push_back(10000);

    vecss.emplace_back(12);
    vecss.emplace_back(123413);



    //use the for each loop
    for(auto i: ve){ //10 23 234
        cout<<i<<" ";
    }

    for(auto iterator: vecss){
        cout<<iterator<<" ";
    }
    vec.pop_back();
    //pop_back() -> removes the last element 
    ve.pop_back();

    for(auto i: ve){ //10 23
        cout<<i<<" ";
    }
    //empty
    bool ans=vec.empty();
    cout<<ans<<endl;
    bool output=vec.empty();
    cout<<output<<endl; 
    //swap

    for(auto i: ve){
        swap(ve[i],ve[i+1]);
    }
    cout<<"Ate";
    for(auto i: vec){
        swap(vec[i],vec[i+1]);
    }

    

    for(auto i: ve){ //10 23
            cout<<i<<" ";
        }
    //swaping question 
    vector<int> a = {1, 2, 3};
    vector<int> b = {10, 20};
    for(auto i: a){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i: b){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"AFTER SWAPPED";
    a.swap(b); //vector swap function swap each all elements of the vector not each one you
    //can use the global swap function like swap(arr[i],arr[i+1]);
    // b.swap(a); will swap all the values from the b to a 
    for(auto i: a){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i: b){
        cout<<i<<" ";
    }
    cout<<endl;
    //erase clear 
    // erase(pos);
    // erase(start,end);
    // clear();

    return 0;
}