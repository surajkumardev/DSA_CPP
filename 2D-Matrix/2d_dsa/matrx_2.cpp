//maximum row sum 

int maximumrowSum(int arr[3][3], int row, int column) {
    int maxrowsum = INT_MIN; 

    for(int i=0; i<row; i++) {
        int rowsumI = 0;
        for(int j=0; j<column; j++) {
            rowsumI += arr[i][j];
        }
        maxrowsum = max(maxrowsum, rowsumI);  // ✅ after full row
    }
    return maxrowsum; 
}



//chanfes

//maxcolumnSUm
int columnSum(int arr[3][3], int row, int column) {
    int maxcolsum = INT_MIN;

    for(int j = 0; j < column; j++) {   // loop over columns
        int colSumJ = 0;
        for(int i = 0; i < row; i++) {  // loop over rows
            colSumJ += arr[i][j];
        }
        maxcolsum = max(maxcolsum, colSumJ); // update max after full column
    }

    return maxcolsum;
}
///code to find the sum of values from the 
//maximum column SUm

int columnSum(int arr[2][2], int row, int column) {
    int maxColumnSum = INT_MIN; 

    for(int j = 0; j < column; j++) {   // loop over columns
        int columnI = 0;
        for(int i = 0; i < row; i++) {  // loop over rows
            columnI += arr[i][j];
        }
        maxColumnSum = max(maxColumnSum, columnI);
    }

    return maxColumnSum; 
}
//diagonal of a twod matrix 
int diagonalSum(int arr[2][2], int row, int column) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            // primary diagonal (top-left to bottom-right)
            if (i == j) {
                sum += arr[i][j];
            }
            // secondary diagonal (top-right to bottom-left)
            else if (j == column - i - 1) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}
//optimization to find the sum 

int diagonalSum(int arr[2][2], int row, int column) {
    int sum = 0;
    for (int i = 0; i < row; i++) {
        // primary diagonal
        sum += arr[i][i];

        // secondary diagonal (avoid double-counting middle element if odd size)
        if (i != column - i - 1) {
            sum += arr[i][column - i - 1];
        }
    }
    return sum;
}
