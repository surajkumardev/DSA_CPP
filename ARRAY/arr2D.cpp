#include<iostream>
using namespace std;
//2D -array multipication 

int main(){
    int arr1[2][2]={{1,2},{3,4}};
    //take input 
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    int arr2[2][2]={{1,2},{3,4}};
    //add two 2 array
    int res_arr[2][2];
    int res_mul[2][2];


    // 2D array addition
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res_arr[i][j]=arr1[i][j]+arr2[i][j];
        }}
    

    //traverse 
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<res_arr[i][j];
        }
        cout<<endl;
    }

    //2d array multilication
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res_mul[i][j]=0;  //initialize with zero
        }
    }
    //now do multiplication and add 
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                res_mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    //traverse the arary 
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<res_mul[i][j]<<" ";
        }
    }






    return 0;
}