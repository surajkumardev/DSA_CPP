
//deletion
int arr_del(int arr[], int n, int pos) {
    // Check for invalid position
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return n;
    }

    // Left shift elements to overwrite the one at 'pos'
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return n - 1; // New size of array after deletion
}




#include <iostream>
using namespace std;

int insertAt(int arr[], int n, int pos, int val) {
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    return n + 1;
}

int deleteAt(int arr[], int n, int pos) {
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    return n - 1;
}

int main() {
    int arr[20] = {1, 2, 4, 5};
    int n = 4;

    n = insertAt(arr, n, 2, 3); // insert 3 at index 2
    n = deleteAt(arr, n, 1);    // delete element at index 1

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}
