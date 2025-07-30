#include<iostream>
using namespace std;
//Jist -> WAP to swap min and max number of the array Not done 
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;

    int minIndex = 0;
    int maxIndex = 0;

    //Logic
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
    }

    // Swap min and max elements
    swap(arr[minIndex], arr[maxIndex]);

    // Print the updated array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
