#include<iostream>
#include<fstream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a=b;
    b=temp;
}


int* sumDiagonal(int** M, int rows, int columns) {
    int* arrOfSum = new int[rows+columns-1];
    int k=0;

    //Right Diagonals of Matrix
    for(int j=columns-1; j>=1; j--) {
        int tempCol = j;
        int tempRows = 0;
        int tempSum = 0;

        while(tempCol < columns && tempRows < rows) {
            tempSum+=M[tempRows][tempCol];
            tempCol++;
            tempRows++;
        }

        arrOfSum[k++]=tempSum;
    }

    //Principal Diagonal
    int princDiagonalSum = 0;
    for(int i=0; i<rows && i<columns; i++){
        princDiagonalSum += M[i][i];
    }

    arrOfSum[k++]=princDiagonalSum;


    //Left Diagonals of Matrix
    for(int i=1; i<rows; i++) {
        int tempRows = i;
        int tempCols = 0;
        int tempSum = 0;

        while(tempRows < rows && tempCols < columns) {
            tempSum += M[tempRows][tempCols];
            tempRows++;
            tempCols++;
        }

        arrOfSum[k++]=tempSum;
    }

    return arrOfSum;
}


void sortingArray(int arr[], int length) {
    for(int i=0; i<length; i++) {
        for(int j=i+1; j<length; j++) {
            if(arr[j]<arr[i]) {
                swap(arr[i],arr[j]);
            }
        }
    }
} 


int main() {
    fstream input("input.txt", fstream::in);
    fstream output("output.txt", fstream::out);


    for(int i=0; i<100; i++) {
        int rows, columns;
        input >> rows >> columns;
        //cout << "rows: " << rows << ", columns: " << columns << endl;

        int** M = new int*[rows];
        for(int h=0; h<rows; h++) {
            M[h] = new int [columns];
            for(int z=0; z<columns; z++) {
                input >> M[h][z];
                //cout << M[h][z] << "\t";
            }
            //cout << endl;
        }
        //cout << endl << endl;

        int* arrOfSum=sumDiagonal(M,rows,columns);
        sortingArray(arrOfSum, rows+columns-1);

        
        for(int h=0; h<rows+columns-1; h++)
            output << arrOfSum[h] << " ";
        output << endl;
    }
}