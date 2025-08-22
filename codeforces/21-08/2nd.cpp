#include <iostream>
using namespace std;
// --3rd the cunning seller 
// minimum cost with the least number of deals

int main(){
    int t; 
    cin>>t; 
    while(t--> 0){  
        int n; 
        cin>>n; 
        //minimum cost of hte waterimonelsl 
        //eg->1
        // output => 3

        int cost = 0;
        int level = 0;
        while (n > 0) {
            int digit = n % 3;   // take last base-3 digit
            n /= 3;              // shift right in base-3

            if (digit) {
                // compute power of 3 for this level
                int power = 1;
                for (int k = 0; k < level; k++) power *= 3;

                // deal formula: 3^(level+1) + level*3^(level-1)
                int price = (level == 0 ? 3 : 3 * power + level * (power / 3));

                cost += digit * price;


                //not able to make the logic
            }
            level++;
        }
        cout<<cost<<endl;





    }

    

        return 0;
}