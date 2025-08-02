#include<iostream>
using namespace std;
int arr_ins(int arr[],int n,int value, int pos){
    //insertion mai right shift and n sai >pos
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    return n+1;
}
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

int main() {
    int arr[5]; // size of array
    int n, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    value=24;
    pos=2;

    //  n=arr_ins(arr,n,value,pos);
    //  cout<<"fjfldsjflsdjf";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }
    //now deletion 
    n=arr_del(arr,n,pos);
    cout<<"Deletion"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }



    return 0;
}
