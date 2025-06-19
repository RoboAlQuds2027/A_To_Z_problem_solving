#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rotateMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    // Create a new matrix to store the rotated result
    vector<vector<int>> rotated(cols, vector<int>(rows));

    // Rotate the matrix by 90 degrees clockwise
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            rotated[j][rows - 1 - i] = matrix[i][j];
        }
    }
    return rotated;
}

int main() {
    // Declare a 2D vector to represent the matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    // Call the function to rotate the matrix
    vector<vector<int>> rotatedMatrix = rotateMatrix(matrix);
    // Print the rotated matrix
    cout << "Rotated Matrix:" << endl;
    for (const auto& row : rotatedMatrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}