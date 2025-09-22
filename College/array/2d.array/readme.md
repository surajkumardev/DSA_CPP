

### Code Reference:
// Convert 2D position to 1D index
Index = row_index * total_columns + col_index

// Convert 1D index back to 2D position  
row_index = Index / total_columns
col_index = Index % total_columns

## why we pass only column when calling function 
void func(int arr[][col], int row, int col)
🔹 Why arr[][{col}] ?
In memory, a 2D array is stored row by row (row-major order).
The compiler needs to know how many columns each row has, so it can calculate the address of arr[i][j].
👉 Formula for element address:
address(arr[i][j]) = base_address + (i * {col} + j) * sizeof(int)