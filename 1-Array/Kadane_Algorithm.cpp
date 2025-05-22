#include <iostream>
#include <vector>
using namespace std;

vector<int> identify_start(const vector<int>& array) {
    vector<int> vec;
    for (int i = 0; i < array.size(); i++) {
        if (array[i] >= 0) {
            vec.push_back(i);
        }
    }
    return vec;
}

int big_sum(const vector<int>& array, const vector<int>& starts) {
    int max_sum = array[0];  // Initialize with first element

    for (int i = 0; i < starts.size(); i++) {
        int current_sum = 0;
        for (int j = starts[i]; j < array.size(); j++) {
            current_sum += array[j];
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    }
    return max_sum;
}

int main() {
    vector<int> ARRAY = {-2, 1, -3, -4, -1, 2, 1, -5, 4};
    vector<int> starts = identify_start(ARRAY);
    int result = big_sum(ARRAY, starts);
    
    cout << "Maximum subarray sum: " << result << endl;
    return 0;
}