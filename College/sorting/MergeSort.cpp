
#include <iostream>
#include<vector> 
#include<queue>
using namespace std;


void merge(vector<int> &arr, int left, int mid, int right) {
    // temp array 
    vector<int> temp(right - left + 1);
    int i = left;      // left half pointer
    int j = mid + 1;   // right half pointer
    int k = 0;         // pointer for temp

    // merge 
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // copy leftover elements from left half
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // copy leftover elements from right half
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // copy sorted elements back into the original array 
    for (int x = 0; x < temp.size(); x++) {
        arr[left + x] = temp[x];
    }
}

void mergeSort(vector<int> &arr, int left, int right) {
    if (left >= right) return;  // base case: one element

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);      // left half
    mergeSort(arr, mid + 1, right); // right half

    merge(arr, left, mid, right);   // merge sorted halves
}



int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
