#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<vector<int>> result(n, vector<int>(m)); // allocate size

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            result[i][j] = matrix[j][i];
        }
    }
    return result;
}

int main() {
    int rows, cols;
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Input
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Transpose
    vector<vector<int>> vec = transpose(matrix);

    int n = vec.size();
    int m = vec[0].size();
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
