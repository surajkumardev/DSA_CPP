#include<iostream>
using namespace std;
//Not DOne
int main() {
    int arr1[] = {10, 20, 30, 40};
    int arr2[] = {10, 20, 30, 40, 50};
    int n1 = 4;
    int n2 = 5;

    // Print elements in arr1 not in arr2
    for(int i = 0; i < n1; i++) {
        bool found = false;
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << "Unique in arr1: " << arr1[i] << endl;
        }
    }

    // Print elements in arr2 not in arr1
    for(int i = 0; i < n2; i++) {
        bool found = false;
        for(int j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << "Unique in arr2: " << arr2[i] << endl;
        }
    }

    return 0;
}
