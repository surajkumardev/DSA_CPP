//The 2d matrix is stored by default in row major form 
//but can also store in column major store 

//------------------------------------------------------------vEctors--------------------------------------------
#include<iostream>
#include<vector>
#include<climits>
#include<numeric>
#include <algorithm> 

using namespace std; 
int main(){
    // int n, m; 
    // cin>>n>>m; 
    // vector<int> vec; 
    // vector<vector<int>> matrix(4, vector<int> (4,1));
    // // vector<vector<int>> matrix(n, vector<int> (m,1)); 
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>matrix[i][j];
    //     }
    // }
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl; 
    // }


    vector<int> first; 
    int size; 
    cin>>size; 
    int data;
    for(int i=0;i<size;i++){
        cin>>data;
        first.push_back(data);
    }
    for(int i=0;i<size;i++){
        cout<<first[i]<<" ";
    }
    cout<<endl; 


    //now turn of 2d vector< 
    int n=4; 
    int m=4;

    vector<vector<int>> vec(n, vector<int>(m,1));
    int money;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>money;
            vec[i].push_back(money);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
