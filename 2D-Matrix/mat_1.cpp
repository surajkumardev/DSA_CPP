#include<iostream>Hi! I can see you have a C++ file open (mat_1.cpp) in your DSA workspace. How can I help you today? Are you working on a matrix-related problem or do you need assistance with something else?


#include<vector>
using namespace std; 
int main(){
    //creating a 2d vector 
    //taking input manually from the user 
    int rows;
    int cols; 
    cin>>rows>>cols;
    vector<vector<int>> matrix(rows, vector<int> (cols));
    //input
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
        for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    return 0;
}