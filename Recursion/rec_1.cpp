//example of recrusion using the facebook birthday 
#include<iostream>
using namespace std;
void func(int n){
    if(n==0){//base case if not given the code will run infinite time and stack overflow condition will take place
        cout<<"Happy birthday bhai";
        return ;
    }
    cout<<n<<" Days left for birthday."<<endl;
    func(n-1);
}


int main(){
    func(6);
    
    return 0;
}