int arr_ins(int arr[],int n,int value, int pos){
    //insertion mai right shift and n sai >pos
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    return n+1;
}