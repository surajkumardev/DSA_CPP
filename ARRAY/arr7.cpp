#include<iostream>
using namespace std;
//Not done
int main() {
    int arr[] = {1, 2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) { //sdfdsf
        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == 1) {
            cout << "Unique element: " << arr[i] << endl;
        }
    }

    return 0;
}
