//print all the even number from n to 2 
#include<iostream>
using namespace std;
void printEven(int n){
    if(n==2){
        cout<<n<<endl;
        return ;
    }
    cout<<n<<endl;
    printEven(n-2);

}
int main(){

    printEven(10);
    
    return 0;
}