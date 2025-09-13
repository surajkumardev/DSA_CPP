// 🔹 QuickSort Algorithm
// Pick a pivot (we’ll choose the last element).
// Partition the array:
// Elements smaller than pivot → left side
// Elements larger than pivot → right side
// Recursively apply QuickSort on left and right subarrays.

#include<iostream> 
#include<vector> 
//participation function 
int partition(vector<int> &arr, int low, int high){
    //return the partition index 
    int pivot=arr[high]; //take high as the pivot elmletn 
    int i=low-1 ; //index of the smaleler elment 
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++; 
            swap(arr[i],arr[j]); 
        }
    }
    swap(arr[i+1],arr[high]); //please pivot in correct position
    return i+1; 
}

void quickSort(vector<int> &arr,int low, int high){
    if(low<high){
        int pi=partition(arr,low, high);

        quickSort(arr,low,pi-1); //left side 
        quickSort(arr,pi+1,high); //right side
    }         
}




int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
