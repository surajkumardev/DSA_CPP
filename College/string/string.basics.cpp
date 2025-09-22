#include <iostream>
#include <string>
using namespace std;
bool Palindrome(string s){
    int start=0;
    int end=s.size()-1; 
    while(start<end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
    }
    return true;
}

int main() {
    // char arr[] = "appl";
    // char arr[]={'a','p','p','l','\0'};
    // int n = sizeof(arr)/sizeof(arr[0]);

    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }   
    // string ss;
    // // cin>>ss;
    // // ss.getline();
    // getline(cin,ss);
    // cout<<ss<<endl;
    // cout<<ss.length()<<endl;
    // cout<<ss.empty()<<endl; 
    // cout<<ss.append(" suraj");
    // cout<<ss<<endl;



    // string wit="suraj is a \"Good\" boy"; //esca[p]e
    // cout<<wit<<endl;
    // //Revese string 
    // for(int i=n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }
    //  //o-> n-1
    //  //n-1 -> 0
    // cout<<endl;
    // //Swap the characther using two pointer
    // string pp="CarRace";
    // int size=sizeof(pp)/sizeof(pp[0]);
    // int start=0;
    // int end=size-1;
    // cout<<endl;
    // cout<<"swaping"<<endl;
    // while(start<end){
    //     swap(pp[start],pp[end]);
    //     start++;
    //     end--;
    // }
    // cout<<endl;
    // cout<<"after swaping"<<endl;    
    // cout<<pp<<endl;

    //find the sub string 
    string str="suraj is a good boy";
    cout<<str.find("good")<<endl;

    if(Palindrome("racecar")){
        cout<<"yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    // cout<<Palindrome("racecar")<<endl;

    return 0;
}
