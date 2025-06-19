#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals){
    //create a vector to store the merged intervals
    vector<vector<int>> merged;
    //sort the intervals based on the start time using loops
    for(int i = 0; i < intervals.size(); i++){
        for(int j = i + 1; j < intervals.size(); j++){
            if(intervals[i][0] > intervals[j][0]){
                swap(intervals[i], intervals[j]);
            }
        }
    }
    // iterate through the sorted intervals
    for(int i = 0; i < intervals.size(); i++){
        //check if the merged vector is empty or if the current interval does not overlap with the last merged interval
        if(merged.empty() || merged.back()[1] < intervals[i][0]){
            //if so, add the current interval to the merged vector
            merged.push_back(intervals[i]);
        } else {
            //if the current interval overlaps with the last merged interval, merge them by updating the end time
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        }
    }
    return merged;
}


int main(){
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> mergedIntervals = mergeIntervals(intervals);
    cout << "Merged Intervals: ";
    for(const auto& interval : mergedIntervals){
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}