#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortArrays(vector<int>& arr1, vector<int>& arr2) {
    int size1 = arr1.size();
    int size2 = arr2.size();
    //for loop to traverse the first array
    for (int i = 0; i < size1; i++) {
        //for loop to traverse the second array
        for (int j = 0; j < size2; j++) {
            //if the element of first array is greater than the element of second array
            if (arr1[i] > arr2[j]) {
                //swap the elements
                swap(arr1[i], arr2[j]);
            }
        }
    }

    for (int i = 0; i < size2 - 1; i++) {
        for (int j = i + 1; j < size2; j++) {
            if (arr2[i] > arr2[j]) {
                swap(arr2[i], arr2[j]);
            }
        }
    }
}

int main(){
    // Declare and initialize two sorted arrays
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6};
    // Call the function to sort the arrays
    sortArrays(arr1, arr2);
    // Print the sorted arrays
    cout << "Sorted Array 1: ";
    for (int num : arr1) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Sorted Array 2: ";
    for (int num : arr2) {
        cout << num << " ";
    }
    cout << endl;
    // Return 0 to indicate successful execution
    cout << "Arrays merged successfully without extra space." << endl;
    cout << "Time Complexity: O(n*m) where n is the size of arr1 and m is the size of arr2." << endl;

    return 0;
}