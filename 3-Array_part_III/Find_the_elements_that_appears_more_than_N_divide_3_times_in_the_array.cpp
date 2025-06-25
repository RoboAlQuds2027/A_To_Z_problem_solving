#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> find_the_candidates(vector<int>& nums) {
    vector<int> candidates;
    for (int i = 0; i < nums.size(); i++) {
        // Only add if not already present
        if (find(candidates.begin(), candidates.end(), nums[i]) == candidates.end()) {
            candidates.push_back(nums[i]);
        }
    }
    return candidates;
}

vector<int> find_the_elements_that_appears_more_than_N_divide_3_times_in_the_array(vector<int>& nums) {
    vector<int> candidates = find_the_candidates(nums);
    vector<int> result;
    int n = nums.size();
    
    for (int candidate : candidates) {
        int count = 0;
        for (int num : nums) {
            if (num == candidate) {
                count++;
            }
        }
        if (count > n / 3) {
            result.push_back(candidate);
        }
    }
    
    return result;
}

int main(){
    vector<int> arr = {11,33,33,11,33,11};
    vector<int> res = find_the_candidates(arr);
    for (int x : res) cout << x << " ";
    cout << endl;
    vector<int> result = find_the_elements_that_appears_more_than_N_divide_3_times_in_the_array(arr);
    cout << "Elements that appear more than N/3 times: ";
    for (int x : result) cout << x << " ";
    cout << endl;
    
    return 0;
}