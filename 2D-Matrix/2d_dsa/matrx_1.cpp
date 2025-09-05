//code to reuturn the index in the form of pair of the target value in the 2d matrxi 
pair<int,int> result; 
int arr[2][2]={{1,2},{3,4}};

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        if(arr[i][j]==target){
            result.first=i;
            result.second=j;
            return result;
        }
    }
}
return {-1,-1};