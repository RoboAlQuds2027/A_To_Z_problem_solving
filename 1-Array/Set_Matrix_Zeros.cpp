#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> set_matrix_zeros(const vector<vector<int>>& array){
    int rows= array.size();
    int columns = array[0].size();
    
    //cout<<rows<<endl;

    int ROWS = 0;
    vector<vector<int>> zero_indexes;

    for(int i= 0; i< rows; i++){
        for(int j = 0; j< columns; j++){
            if( array[i][j] == 0){
                
                ROWS++;
                zero_indexes.resize(ROWS, vector<int>(2));
                for(int x = 0; x<2;x++){
                    if(x==0){
                        zero_indexes[ROWS-1][x] = i;
                    }else{
                        zero_indexes[ROWS-1][x] = j;
                    }
                }
                
            }
        }
    }

    return zero_indexes;
}

vector<vector<int>> update_function(vector<vector<int>>& zero_indexes, vector<vector<int>>& array){
    int array_columns_size= array[0].size();
    int array_rows_size = array.size();
    for(int i=0; i<2;i++){
        for(int j=0;j<2;j++){
            if(j==0){
                //update the rows
                for(int c=0;c<array_columns_size;c++){
                    array[zero_indexes[i][j]][c] =  0;
                }
                
            }else{
                //update the columns
                for(int r=0;r<array_rows_size;r++){
                    array[r][zero_indexes[i][j]] =  0;
                }
            }
        }


    }
    return array;
}


int main(){

    vector<vector<int>> array(3,vector<int>(3));
    array ={{0,1,2},
            {3,4,5},
            {6,0,8}};
    vector<vector<int>> index_of_zeros = set_matrix_zeros(array);
    vector<vector<int>> new_vector = update_function(index_of_zeros, array);

    int no_rows = new_vector.size();
    int no_columns = new_vector[0].size();
    //print the zero_indexes vector
    for(int i=0; i< no_rows;i++){
        for(int j=0;j<no_rows;j++){
            cout<< " "<< new_vector[i][j]<< " ";
        }
        cout<<endl;
    }
    
    

    return 0;
}