#include <iostream>
#include <vector>

using namespace std;

vector<int> sort(const vector<int>& arr){
    //how many times did that element was repeated
    vector<int> repeated_element (3,0);
    for(int i = 0; i< arr.size();i++){
        if(arr[i] == 0){
            repeated_element[0]++;
        }else if(arr[i]==1){
            repeated_element[1]++;
        }else if (arr[i]==2)
        {
            repeated_element[2]++;
        } 
    }

    //create sorted array form 0's, 1's and 2's
    vector<int> sorted_array;
    for(int i= 0; i<3 ;i++){
        for(int j =0;j<repeated_element[i] ;j++){
            sorted_array.push_back(i);
        }
    }
      
    return sorted_array;
}
int main(){
    vector<int> array = {2,0,2,1,1,0};
    vector<int> result_array = sort(array);
    cout << "the final result: ";
    for(auto x : result_array) {
        std::cout << x << " ";
    }
    cout << endl;
    return 0;
}