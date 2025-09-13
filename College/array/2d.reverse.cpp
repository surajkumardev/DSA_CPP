// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
//         //do transpose arr[i][j]=arr[j][i], row-> column

//         int n=matrix.size();
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }

//         //now rever column 
//         for(int i=0;i<n;i++){
//             reverse(matrix[i].begin(),matrix[i].end());
//         }
        
//     }
// };

//brute force
// void rotateBrute(vector<vector<int>>& matrix) {
//     int n = matrix.size();
//     vector<vector<int>> temp(n, vector<int>(n, 0));

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             temp[j][n - 1 - i] = matrix[i][j];
//         }
//     }

//     // copy back to original
//     matrix = temp;
// }
