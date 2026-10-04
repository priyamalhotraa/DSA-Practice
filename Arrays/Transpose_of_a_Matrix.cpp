```cpp 
// Problem: Transpose of a Matrix
// Topic: Matrix

/*
APPROACH: CH
Find the transpose of the given matrix.

If the matrix is empty:
    Return an empty matrix.

Store the number of rows and columns.

Create a new matrix with:
    Number of rows equal to the original number of columns.
    Number of columns equal to the original number of rows.

Traverse the original matrix:
    Place each element at transposed[j][i].

Return the transposed matrix.
*/

class Matrix {
public:
    vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
        if(matrix.empty()) {
            return {};
        }

        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> transposed(m, vector<int>(n));

        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                transposed[j][i] = matrix[i][j];
            }
        }

        return transposed;
    }
};
```
