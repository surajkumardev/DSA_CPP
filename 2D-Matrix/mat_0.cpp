#include<iostream>  //-----------------------------------------2D matrix --------------------------------
#include<vector>
using namespace std; 
int main(){
    int rows, cols;
    cin>>rows>>cols; 
    //create a 2d vector
    vector<vector<int>> matrix(rows, vector<int>(cols));

    //input 
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
    }
    }
    //outupt
        for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
    }

    return 0;
}