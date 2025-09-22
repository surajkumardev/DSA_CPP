// Day 60 the day when you have completed the most important part so keep learing the most important ones
// Day 22 --STL -> 02-10-27
#include<iostream> 
#include<vector> 
#include<queue> 
#include<list>
#include<unordered_set>
#include<set> 
#include<map> 
#include<unordered_map> 
// | Container               | Insert / Erase / Find (avg) | Worst Case |
// | ----------------------- | --------------------------- | ---------- |
// | **set / multiset**      | `O(log n)`                  | `O(log n)` |
// | **unordered\_set**      | `O(1)`                      | `O(n)`     |
// | **unordered\_multiset** | `O(1)`                      | `O(n)`     |
// | **map / multimap**      | `O(log n)`                  | `O(log n)` |
// | **unordered\_map**      | `O(1)`                      | `O(n)`     |
// | **unordered\_multimap** | `O(1)`                          | `O(n)`     |
// |    note => map => o(log(n)), best worst 
// |    unordered_map => o(1) ,o(n), best , worst (collison reason)
using namespace std;
int main(){

    //=-----------------------------------------------PAIR--------------------------
    ////name , rollNo

    pair<string, int> student; 
    student.first="Suraj";
    student.second=100;
    student=make_pair("rohit",100);
    cout<<student.first<<" "<<student.second<<" "<<endl;
    ///name age rollNo f
    pair<string, pair<int,int>> student2; 
    student2.first = "Amit";
    student2.second.first = 20;    // age
    student2.second.second = 101;  // rollNo
    cout << student2.first << " " << student2.second.first << " " << student2.second.second << endl;
    pair<pair<int,int> ,pair<int,int>> pp; 
    pp.first.first=10;
    pp.first.second=100;
    pp.second.first=1000;
    pp.second.second=199;
    cout << pp.first.first << " " << pp.first.second << " " << pp.second.first << " " << pp.second.second << endl;

//-------------------------------------------------------------------------------------------------------------
//list -> by defalut the linked list in cpp
//list is the doubly linked that we have in the cpp
list<int> li; 
li.push_back(10);
li.push_back(100);
li.push_back(10000);

for(auto it: li){
    cout<<it<<" ";
}
cout<<endl;
//set -> it store only unique element 
//store value in sorted order 
//search, insert, delete -> log(n) time mai karta hai
//insdie mai red black tree use karta hai

    set<int> st; 
    st.insert(10);
    st.insert(100);
    st.insert(200);
    st.insert(300);
    st.insert(400);
    st.insert(500);
    st.insert(600);

    for(auto it: st){
        cout<<it<<endl;
    }
    //different function that are present in the set 
    //erase 
    st.erase(100);
    //insert 
    st.insert(1000);
    //
    for(auto it: st){
        if(st.find(1000)!=st.end()){
            cout<<"yes Present Hai"<<endl;
        }else{
            cout<<"present nahi hai"<<endl;
        }
    }

    //count 
    cout<<st.count(1000)<<" KITNAN PRSENT HAI "<<endl;
    if(st.count(1000)){
        cout<<"Present hai balak"<<endl;
    }else{
        cout<<"Nahai hai mitra"<<endl;
    }
//----------------------------------------------MULTI SET---------------------------------------------------------
//Mutliset store element in ascending order 
//Multiset mai duplicate element ho sakte hai
//internally red black tree -> insertion, deletion, search -> o(logn) 
    multiset<int> mulset; 
    mulset.insert(10);
    mulset.insert(100);
    mulset.insert(1000);
    mulset.insert(1000);

    for(auto it: mulset){
        cout<<it<<endl; 
    }
    //now the functions that are present int the multiset 

    if(mulset.count(10)){
        cout<<"Present hai multiset mai"<<endl;
    }else{
        cout<<"Present nahi hai"<<endl;
    }
//-------------------------------------------------UNSORTED ORDER---------------------------------------------//
// 1. it Store element in not proper order 
// 2.. serach, insertion, deletion->. o(1); 
//3. internally hashing use karta hai 
//4. hash table 
    unordered_set<int> ss; 
    ss.insert(100);
    ss.insert(10000);
    ss.insert(10000);

    for(auto it: ss){
        cout<<it<<endl; 
    }
            // {
        // set=> unique element, sorted
        // multiset=> sorted 
        // unordered_set=> unique 
        // unordered_multiset=> kuch nahi
        // }
//---------------------set, unordered_set, multiset, unordered_multiset---------
//---------------------------------------------Map -> Unordered and ordered Map 

    // 1. map
    map<int, int> mp ; 
    mp.insert(make_pair(1,2));
    mp.insert(make_pair(3,4));
    mp.insert(make_pair(5,6));
    mp.insert(make_pair(7,8));
    mp.insert(make_pair(9,10));
    mp.insert(make_pair(11,12));
    mp.insert(make_pair(13,14));
    cout<<"Before"<<endl;
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    //updation
    mp[11]=13; //mp[key]=value
    //erase 
    mp.erase(10);
    cout<<"after "<<endl;
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    //find 
    if(mp.find(11)!=mp.end()){
        cout<<"Present hai map mai"<<endl;
    }else{
        cout<<"Present nahi hai"<<endl;
    }
    //count 
    if(mp.count(11)){
        cout<<"dekho Yaha"<<endl ;
        cout<<mp[13]<<endl; //mp[key]=value sai access hoga
        cout<<"Present hai map mai"<<endl;
    }else{
        cout<<"Present nahi hai"<<endl;
    }
    //-------------------------------------unordered map-----------------
    //point
    //unique kyes present hota hai, duplicate not allowed
    //not neccessary it hsould be in sorted format 
    //hashing 
    //insert, search, delete -> o(1)

    unordered_map<int, int> unmap;
    unmap.insert(make_pair(100,1));
    unmap.insert(make_pair(101,2));
    unmap.insert(make_pair(102,3));
    unmap.insert(make_pair(103,4));
    unmap.insert(make_pair(104,5));
    unmap.insert(make_pair(105,6));
    unmap.insert(make_pair(106,7));
    unmap[100]=100;
    //output mai order nahi hoga kuch bhi kabhi bhi aa sakta hai
    for(auto it: unmap){
        cout<<it.first<<" "<<it.second<<endl;
    }

        return 0;
    }