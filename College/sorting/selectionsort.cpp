#include <iostream>
#include<vector> 
using namespace std;

void SelectSort(vector<int> &arr){
    //kya karna hai 
    //pahale index kai element ko minmum select karo 
    ///find miminum in innner looop 
    //and then swap it with the ith element in the outer loop 
    int n=arr.size(); 
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){ //add on all j=i+1 , j<n-1+1; 
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
// complexity-> o(n2);


//selection sort //kaise kaam karega 
//find the minimum elment and then swap it with ith elment 
void selectionSort(vector<int> &arr){

    for(int i=0;i<arr.size()-1;i++){
        int min=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}



int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    return 0;
}
