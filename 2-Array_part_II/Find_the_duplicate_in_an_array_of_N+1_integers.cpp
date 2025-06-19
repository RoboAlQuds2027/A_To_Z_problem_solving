#include <iostream>
#include <vector>
using namespace std;

vector<int> FindDiuplicatedNumbers(const vector<int>& arr){
    //create a vector to store how many times did the number was repeated
    vector<int> RepeatedNeumbers(arr.size(), 0);

    for(int i= 0; i< arr.size();i++){
        for(int j = i+1; j< arr.size(); j++){
            if(arr.at(i) == j){
                //update the count of the number
                RepeatedNeumbers.at(i+1)++;
            }
        }
    }
    return RepeatedNeumbers;
}

int RepeatedNumber(const vector<int>& arr){
    //create a vector to store how many times did the number was repeated
    vector<int> RepeatedNeumbers(arr.size(), 0);

    for(int i= 0; i< arr.size();i++){
        //update the count of the number
        RepeatedNeumbers.at(arr.at(i))++;
    }

    for(int i= 0; i< RepeatedNeumbers.size();i++){
        if(RepeatedNeumbers.at(i) > 1){
            return i;
        }
    }
    return -1; //if no repeated number found
}

int main(){
    vector<int> arr = {1, 3, 4, 2, 3};
    int repeatedNumber = RepeatedNumber(arr);
    if(repeatedNumber != -1){
        cout << "The repeated number is: " << repeatedNumber << endl;
    } else {
        cout << "No repeated number found." << endl;
    }
    return 0;
}
