#include <iostream>
#include<vector> 
using namespace std;

//concept kya hai 
//what we have to do is that we have consequetly find the minimum element 
//then swap the minimum element with the arr[i]


void selectionSort(vector<int> &vec){
    int n=vec.size(); 
  for(int i=0;i<n-1;i++){
    int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(vec[j]<vec[minIndex]){
                minIndex=j;
            }
        }
        swap(vec[i],vec[minIndex]);
    }
}




int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    return 0;
}
