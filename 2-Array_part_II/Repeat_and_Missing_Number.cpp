#include <iostream>
#include <vector>

using namespace std;

vector<int> find_repeated_missing(const vector<int> &arr){

    int size = arr.size();  //5
    //lets create vector with size of N and store how many times did the element appear
    vector<int> appearence(size,0);
    for(int i= 0; i< size; i++){
        for(int j= 1; j<=size; j++){
            if(arr.at(i) == j){   //{3,1,2,3,5};
                appearence.at(j-1)++;
            }
        }
    }
//    cout<<"appearence.at(1): "<<appearence.at(0)<<endl;
//    cout<<"the size of appearence: "<<appearence.size()<<endl;

    for(int k = 0; k<size; k++){
        cout << "the " << k+1 << " was repeated: " << appearence.at(k) << endl;
    }
    cout<< "******"<<endl;

    for(int l = 0; l<size; l++){
        if(appearence.at(l) != 1){
            cout<< "the result is: "<< l+1<<endl;
        }
    }
    return appearence;
}


int main(){
    vector<int> array_1 = {3,1,2,3,5};
    vector<int> array_2 = {3,1,2,5,4,6,7,5};

//    vector<int> result_1 = find_repeated_missing(array_1);
    vector<int> result_2 = find_repeated_missing(array_2);
    return 0;
}