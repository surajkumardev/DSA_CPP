#include<iostream> 
#include<string> 
#include<algorithm> 
using namespace std; 

/* 
palindrome=> 
alpha numeric=a-z, z-a, 0-9, A-Z 

and a==A 

*/
int main(){

    bool isAplha(char ch){
        if((ch>='0' && ch<='9') ||(tolower(ch)>='a' && tolower(ch)<='z'))
        return true; 
    

    return false; 
    }
    bool isAlpha(char ch){
        if(isalnum(ch)){
            return true; 
        }else{
            false; 
        }
    }

    bool ispalindrome(string str){
        int st=0;
        int end=str.size()-1; 
        while(st<end){
            if(!isAplha(str[st])){
                st++; 
                continue; 
            }
            if(!isApha(s[end])){
                end--;
                continue;  
            }
            if(tolower(s[st])!=tolower(s[end])){
                return false; 
            }
            st++; 
            end--;
        }
        return true; 
    }




return 0;
}