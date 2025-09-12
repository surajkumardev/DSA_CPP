#include<iostream> 
using namespace std; 
void printNTimes(int n){    
    if(n==0){
        return; 
    }
    cout<<"SUraJ"<<" ";
    printNTimes(n-1);

    cout<<endl;

}

// //forward recursion 
// void printNtime(int n){
//     if(n==n){
//         return ; 
//     }
//     cout<<" Kisna"<< " "; {WRONG APPROACH}
//     printNtime(n+1);

// }
//working 
void printNTim(int n, int i){
    if(n>i){
        return ;
    }

    cout<<" kisnan"<<" ";
    printNTim(n+1, i);
}
//print 1 to n 
void onetoN(int n,int i){
    if(i>n){
        return ;
    }
    cout<<i<<" ";
    onetoN(n,i+1);
}
//print n to 1
void ntoone(int n){
    if(n<=0){
        return ;
    }
    cout<<n<<" ";
    ntoone(n-1);
}
//
int main(){
    //print the name n times using recursino 
    int n;
    cin>>n; 
    printNTimes(n);
    
printNTim(0,10);

    onetoN(10,1);

    ntoone(10);


    return 0;
}