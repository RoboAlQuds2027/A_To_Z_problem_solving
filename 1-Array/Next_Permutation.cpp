#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void swap(vector<int> & arr,int index_1, int index_2){
    int temp = arr.at(index_1);
    arr.at(index_1)=arr.at(index_2);
    arr.at(index_2) = temp;
}

int next_bigger_number(vector<int>& arr,int start, int end){
    int i = start;
    int smallest = 1000;
    int smallest_index;
    while(i<=end){
        if(arr.at(i)<smallest){
            smallest= arr.at(i);
            smallest_index = i;
        }
        i++;
    }
    return smallest_index;
}

void next_permutation(vector<int>& arr){ 
    int size = arr.size() ;
    for(int i= size - 1; i>0; i--){
      
        
        if(arr.at(i)> arr.at(i-1)){
            //the index we need to change is i-1 with what?
            int index_1 = i-1;
            int index_2 = next_bigger_number(arr, i, arr.size()-1);
            swap(arr, index_1, index_2);
            sort(arr.begin()+index_1+1,arr.begin()+size);
            return;
        }

    }
    sort(arr.begin(),arr.begin()+size);
}

int main(){

    vector<int> array= {4,3,2,1};
    next_permutation(array);
    for(int i = 0; i<array.size();i++){
        cout<<array.at(i)<< " ";
    }
    return 0;
}
