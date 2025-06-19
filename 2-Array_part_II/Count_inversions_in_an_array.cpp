#include <iostream>
#include <vector>
using namespace std;

int inversion(const vector<int>& arr){

    int size= arr.size();
    //create variable to count the inversion 
    int result = 0;

    //lets create neasted loop as we will need to make comparison
    for(int i= 0; i< size; i++){ // {1,2,3,4,5}
        for(int j = i+1; j<size; j++){
            if(arr.at(i)> arr.at(j)){
                result++;
            }
        }
    }
    return result;
}



int main(){
    vector<int> array  = {5,3,2,1,4};
    cout<< "the result is: "<< inversion(array)<<endl;
    return 0;
}