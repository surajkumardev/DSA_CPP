#include<iostream>
#include<vector>
#include<climits>
#include<numeric>
#include <algorithm> // <- required for swap

using namespace std; 
// --------------------------------------------Print Column--------------------------------------------
void printCol(int arr[3][3],int row, int col){
    //column wise -> 147 258 369
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

// --------------------------------------------Print Row--------------------------------------------
void printRow(int arr[3][3],int row, int col){
    //row wise -> 123 456 789
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// --------------------------------------------Summation--------------------------------------------
void summ(int arr1[3][3],int arr2[3][3],int ans[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            ans[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
}

// --------------------------------------------Row Index With Maximum Sum--------------------------------------------
int maxSumRowIdx(int arr[3][3]){
    int maxisum=INT_MIN; 
    int rowIdx=-1;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxisum){
            maxisum=sum; 
            rowIdx=i;
        }
    }
    return rowIdx;
}
// --------------------------------------------Print Diagonal Element Sum {Optimal}--------------------------------------------
// int diagonalSumNaive(int arr[][col],int row, int col){
//     int sum=0;
//     int n=3;
//     int secdigsum=0;
//     for(int i=0;i<3;i++){
//         sum=sum+arr[i][i];
//         secdigsum=secdigsum+arr[i][3-i-1];
//     }
//     // Avoid double-counting center element for odd n
//     if(n%2!=0){
//         secdigsum=secdigsum-arr[n/2][n/2];
//         //odd case mai hi karna hai 
//     }
//     return sum+secdigsum;
// }
// --------------------------------------------Reverse Each Row of the matrix--------------------------------------------
void reververSeRow(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3/2;j++){
           swap(arr[i][j],arr[i][3-j-1]);
        }
    }
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //print simple 
    cout<<"Row Wise"<<endl;
    printRow(arr, 3,3);
    //now column wise 
    cout<<"Column Wise"<<endl;
    printCol(arr, 3,3);
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    int ans[3][3];
    summ(arr1,arr2,ans); 
    cout<<"Summation of two array"<<endl;
    printRow(ans, 3,3);
    int maxiSum=maxSumRowIdx(arr);
    cout<<"maximum sum row index "<<maxiSum;
    cout<<endl;
    // int diagonalSum=diagonalSumNaive(arr);
    // cout<<"diagonal sum "<<diagonalSum;
    // int evenarr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // int diagonalSumEven=diagonalSumNaive(evenarr);  
    // cout<<"diagonal sum even "<<diagonalSumEven;
    int rev[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    reververSeRow(rev);
    printRow(rev, 3,3);
    return 0;
}