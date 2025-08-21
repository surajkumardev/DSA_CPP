#include <iostream>
using namespace std;

// Due to his peculiarities, Vlad can only add characters to the beginning of the word,
//  while Dima can only add them to the end. They add characters in the order they appear in string b
// . Your task is to determine what string Vlad and Dima will end up with.
int main(){
    int t; 
    cin>>t; 
    while(t--> 0){
        int n;  //2
        cin>> n; 
        string a; //ot
        cin>>a; 
        int m; 
        cin>>m; //2
        string b;  
        cin>>b;  //ad 
        string c; //output->  dota
        cin>>c;  //DV
        //divide b; 
        //ci -> 'v' then vlad 
        // otherwise dima
        //vald first mai 
        // and dota last mai lagayege
    for (int i = 0; i < m; i++) {
                if (c[i] == 'V') {
                    a = b[i] + a;
                } else {
                    a = a + b[i];
                }
            }

                cout << a << "\n";

    
    return 0;
}