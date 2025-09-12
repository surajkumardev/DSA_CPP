#include<iostream>
#include<string> 
using namespace std;
int main(){
    string s1="hello";
    string s2("world");
    string s3(5,'x'); //"xxxxxx" five lenght string of x

    //iterate
    string a(10,'y');
    //method 1
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    //method 2 range based loop 
    for(char c: a){
        cout<<c<< " ";
    }
    //adding or concatenation
    string aa="lsjfds";
    string bb="sfsdf";
    string c=aa+" "+bb;
    cout<<c<< " ";
    aa.push_back('!');
    cout<<aa<<" ";

    string help="indis";
    help.pop_back(); //remove the last characther 
    cout<<help<< " "; //fucke
    help.erase(0,2);
    cout<<help<< " ";
    // 0 to 1 only will not include 2 index 

    //conversion
    //int to string
    int num=123;
    string s=to_string(num); 
    cout<<s; 
    cout<<endl;
    cout<<"_________________________________________________";
    cout<<endl;
    //string to int
    string str="100";
    int val=stoi(str);
    cout<<val<<" ";
    cout<<val+10<<" ";


    //compare two string 
    string ena="apple", en="banana";
    if(ena==en){
        cout<<" EQUAL "<<endl;
    }else{
        cout<<"NOT EQUAL";
    }



    



    return 0;
}