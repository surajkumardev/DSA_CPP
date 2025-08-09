#include<iostream>
using namespace std;
//Jist => use the pass by value and pass by  reference thing
void changevalue(int n){
    n=19;
}
void changevalueby(int * ptr){
    *ptr=1000;
}
int main(){
    int n=10;
    changevalue(n);
    cout<<"AFTER CHHANING VALUES: "<<n<<endl;
    //here the value will not change as we are passsing teh value not the reference 

    //Now thw use of the pass by referecne thing 
    int x=100;
    changevalueby(&x);
    cout<<"PASS BY REFERECNE EXMAPLE: "<<x<<endl;
    
    
    return 0;
}