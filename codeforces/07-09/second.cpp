#include<iostream>
#include<vector>
#include<queue>
#include<queue>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
     int a;
     int b; 
     cin>>a;
     cin>>b;
        
        int asnwer = -1;
        for (int i = 1; i * i <= b; i++) {
            if (b % i == 0) {
             
                int firstsum = a * i + b / i;
                if (firstsum % 2 == 0) {
                    asnwer = max(asnwer, firstsum);
                }

                if (i != b / i) {
                    int i2 = b / i;
                    int secodnsum = a * i2 + b / i2;
                    if (secodnsum % 2 == 0) {
                        asnwer = max(asnwer, secodnsum);
                    }
                }
            }
        }
        
        cout << asnwer << "\n";
    }
    
    return 0;
}
