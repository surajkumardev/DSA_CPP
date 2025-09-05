#include<iostream>
#include<vector>
#include<string>
using namespace std; 
bool palindrome(int x){
    int check=x;
    if(check<0){
        return false; 
    }
    int rev=0;
    while(x>0){
        int rem=x%10;
        rev=(rev*10)+rem;
        x=x/10;
    }
    if(check==rev){
        return true;
    }else{
        return false; 
    }
}

int main(){
    int x=122;
    bool ans=palindrome(x);
    cout<<ans<<endl;
    return 0;
}