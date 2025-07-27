#include<iostream>
using namespace std;
int main(){
    // int a;..
    char ch;
    cin>>ch;
    //chekck
    if(ch>'a'&& ch<'z'){
        cout<<"Small character";
    }else{
        cout<<"Capital Letter";
    }
    //ternay Operator
    int a=3,b=5;
    cout<<(a<b?a:b);

    //example of while loop
    int n=5;
    // while(n>0 && n<12){
    //     cout<<"Hello";

    // }
    //for loop
    for(int i=9;i<234;i++){
        cout<<"sf";
    }
    //sum of n
    int k=5;
    for(int i=1;i<=k;i++){
        int count=count+k;
        cout<<count;
}
//do while loop
int i=5;
do
{
    cout<<"Hellskldflkjdsf";
    //Thats why do while loop print the statment atleast one time 
} while (i<5);



    return 0;
}