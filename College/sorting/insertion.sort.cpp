// #include <bits/stdc++.h>
#include<iso646.h>
#include<iostream>
#include<vector>

using namespace std;

// -----{NAHI KIYA HAIAII}

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];   // element to insert
        int j = i - 1;

        // shift elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;   // place key in its correct position
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    insertionSort(arr);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    return 0;
}
