#include <iostream>
#include <vector>
using namespace std;

int find_no_of_paths(int rows, int cols) {
    //find number of paths from top left to bottom right in a matrix
    //using dynamic programming
    vector<vector<int>> dp(rows, vector<int>(cols, 0));
    // Base case: there's one way to reach any cell in the first row or first column
    for (int i = 0; i < rows; i++) {
        dp[i][0] = 1; // Only one way to reach any cell in the first column
    }
    for (int j = 0; j < cols; j++) {
        dp[0][j] = 1; // Only one way to reach any cell in the first row
    }

    //print the dp table
    cout << "DP Table:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    // Fill the rest of the dp table
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    //print the dp table
    cout << "DP Table:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return dp[rows - 1][cols - 1]; // Return the number of paths to the bottom-right corner
}

int main(){

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = matrix.size();
    int cols = matrix[0].size();
    int result = find_no_of_paths(rows, cols);
    cout << "Number of paths from top left to bottom right: " << result << endl;

    return 0;
}