#include<iostream> 
#include<string> 
#include<algorithm> 
using namespace std; 
int main(){

    char st[]="sldkfjldsf";
    cout<<st<<endl; 
    char str[100]={'a','b'};
    cout<<str<<endl; 


    cin.getline(str, 10,'.'); //'.' acting as a delimitor 


    cout<<str<<endl;


    ///strinng input taking 
    string stre; 
    getline(cin,stre);
    cout<<stre; 

    //how to iterate the strings
    string india="apna college";
    for(char ch: india){
        cout<<ch;
    }

    //using iterator 
    int a=0; 
    while(a<india.size()){
        cout<<str[a];
        a++; 
    }

    

    //reversing the string


    cout<<endl;
    string hell="suraj kumar dev";
    reverse(hell.begin(),hell.end());
    cout<<hell<<endl;


    return 0;
}