#include <iostream>
#include <vector>

using namespace std;

int profit(const vector<int> arr){
    int min = 999999; //any negtive number
    int min_index;
    int max= -1; //ant negtive number
    //update min
    for(int i=0; i< arr.size(); i++){
        if(arr[i]<min){
            min = arr[i];
            min_index = i;
        }
    }
    if(min_index+1>=arr.size()){
        return 0;
    }
    for(int i = min_index+1; i<arr.size();i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    int result = max - min;

    return result;
}

int main(){
    vector<int> input = {7,8,5,3,6,1};
    cout << "the profit : "<< profit(input)<<endl;

    return 0;
}