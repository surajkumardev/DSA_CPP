#include<iostream>
#include<vector>

vector<vector<int>> transose(vector<vector<int>> &matrix,int degree){
    //this is the boiler plate code 
    
}
using namespace std; 
int main(){
    int row; 
    int column; 
    cin>>row>>column;
    vector<vector<int>> matrix(row, vector<int> (column));

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[row][column];
        }
    }

    //now based on the transpose change the array 
    int degree; 
    cin>>degree;

    vector<vector<int>> result=transose(matrix, degree);

    int n=result.size();
    int m=result[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<result[i][j];
        }
        cout<<endl; 
    }

    return 0;
}