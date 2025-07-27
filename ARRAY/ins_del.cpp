#include <iostream>
using namespace std;

void traverse(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

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
    int arr[100] = {1, 2, 4, 5, 6};
    int n = 5;

    cout << "Original: ";
    traverse(arr, n);

    n = insertAt(arr, n, 0, 10);
    cout << "After insert at start: ";
    traverse(arr, n);

    n = insertAt(arr, n, n, 20);
    cout << "After insert at end: ";
    traverse(arr, n);

    n = insertAt(arr, n, n/2, 15);
    cout << "After insert at middle: ";
    traverse(arr, n);

    n = insertAt(arr, n, 2, 99);
    cout << "After insert at position 2: ";
    traverse(arr, n);

    n = deleteAt(arr, n, 0);
    cout << "After delete at start: ";
    traverse(arr, n);

    n = deleteAt(arr, n, n - 1);
    cout << "After delete at end: ";
    traverse(arr, n);

    n = deleteAt(arr, n, n / 2);
    cout << "After delete at middle: ";
    traverse(arr, n);

    n = deleteAt(arr, n, 2);
    cout << "After delete at position 2: ";
    traverse(arr, n);

    return 0;
}
