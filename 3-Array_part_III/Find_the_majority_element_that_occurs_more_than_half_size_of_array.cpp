#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0, candidate = 0;

    // First pass: find candidate
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Second pass: verify candidate
    count = 0;
    for (int num : nums) {
        if (num == candidate) count++;
    }
    if (count > nums.size() / 2)
        return candidate;
    else
        return -1; // No majority element
}

int main(){
    vector<int> arr = {1, 2, 3, 2, 2, 2, 5, 4, 2};
    int result = majorityElement(arr);
    if (result != -1)
        cout << "Majority element is: " << result << endl;
    else
        cout << "No majority element found." << endl;
    return 0;
}