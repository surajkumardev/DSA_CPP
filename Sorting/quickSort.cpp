#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
        }
    }
    int t = arr[i + 1]; arr[i + 1] = arr[high]; arr[high] = t;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 6, 3};
    int n = 6;
    cout << "Original array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";  
    cout << endl;
    quickSort(arr, 0, n - 1);
    std::cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << endl;
    return 0;
}
