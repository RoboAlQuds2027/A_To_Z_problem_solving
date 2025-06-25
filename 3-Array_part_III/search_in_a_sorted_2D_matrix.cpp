#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>&matrix, int target)
{
    for(int i=0;i<matrix.size(); i++){
        if(matrix[i][0] <= target && matrix[i][matrix[i].size()-1] >= target){
            //with for loop we can find the row where the target is present
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 70;
    if(searchMatrix(matrix, target)){
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }
    return 0;
}