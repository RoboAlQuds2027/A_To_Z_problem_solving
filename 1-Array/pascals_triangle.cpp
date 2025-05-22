#include <iostream>
#include <vector>
using namespace std;

//create function of factorial

int factorial(int number){
    int total = 1;
    for(int i=number; i> 0;i--){
        total= total * i;
    }
    return total;
}

int variation_1(int row, int colm){
    int value = (factorial(row)/(factorial(colm)*factorial(row-colm)));
    return value;
}

void variation_2(int row){
    int colm = row;
    for(int i=0 ;i<=row ;i++){
        cout<< variation_1(row,i)<<" ";
    }
    cout<<endl;
}

void variation_3(int row){
    for(int i = 0; i<=row; i++){
        variation_2(i);
    }
}

int main(){

    int x = factorial(3);
    cout<< "the x factoorial value is: "<< x << endl;

    int pos_value = variation_1(5,3);
    cout<<"the pos_value: "<< pos_value<<endl;
    variation_2(4);
    variation_3(4);
    return 0;
}