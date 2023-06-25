#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int columns = matrix[0].size();

    vector<vector<int>> transposed(columns, vector<int>(rows));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    return transposed;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<vector<int>> transposed = transposeMatrix(matrix);

    cout << "Transposed matrix:" << endl;
    for (const auto& row : transposed) {
        for (int num : row)
            cout << num << " ";
        cout << endl;
    }

    return 0;
}
