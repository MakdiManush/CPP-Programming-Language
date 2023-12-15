#include <iostream>
using namespace std;

class Matrix{
public:
    // Attributes
    int row;
    int column;
    int* arr;
    
    Matrix(int row, int column, int* arr){
        this->row = row;
        this->column = column;
        this->arr = arr;
    }

    void setElements(){
        int arr[this->row][this->column];
        for(int i = 0; i < this->row; i++){
            for(int j = 0; j < this->column; j++){
                cout<< "Enter the element " << j+1 << " for row " << i+1 << " : " << endl;
                cin>>arr[i][j];
            }
        }
    }

    void printArray(){
        // int arr[this->row][this->column];
        for(int i = 0; i < this->row; i++){
            for(int j = 0; j < this->column; j++){
                cout<<this->arr[i][j];
            }
        }
    }

    void addMatrices(Matrix M1, Matrix M2){
        int arr[this->row][this->column];
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                this->arr[i][j] = M1.arr[i][j]+M2.arr[i][j];
            }
        }
    }
};

int main(){
    int* arr[2][3];
    Matrix M1(2, 3, arr[2][3]);
    M1.setElements();
    M1.printArray();


    // Matrix M2(2, 3);
    // M2.setElements();

    // Matrix M3(2,3);
    // M3.addMatrices(M1, M2);
    return 0;
}