#include <iostream>
#include<vector> 
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); 
    }
}



void SelectSort(vector<int> &arr){
    //kya karna hai 
    //pahale index kai element ko minmum select karo 
    ///find miminum in innner looop 
    //and then swap it with the ith element in the outer loop 
    int n=arr.size(); 
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
// complexity-> o(n2);




int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    return 0;
}
