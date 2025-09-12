#include <iostream>
using namespace std;

// Due to his peculiarities, Vlad can only add characters to the beginning of the word,
//  while Dima can only add them to the end. They add characters in the order they appear in string b
// . Your task is to determine what string Vlad and Dima will end up with.
int main(){
    int t; 
    cin>>t; 
    while(t--> 0){
   
    int a, b;
    if(a==b){
        cout<<0<<endl;
    } 
    int maxi=max(a,b);
    int count=0;
    for(int i=1;i<=maxi;i++){

        if(a==b){
            cout<<cout<<endl;

        }
        a=a*i;
        b=b*i;
        count++;
     }
}
    return 0;

}