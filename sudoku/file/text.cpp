#include <fstream>
#include <iostream>

using namespace std;

int main() {

    char** sudokuMatrix = new char*[9];

    for (int i = 0; i < 9; i++) {
        sudokuMatrix[i] = new char[9];
    }


    ifstream infile("../file/matrix1.txt");
    int i = 0;
    while (infile >> sudokuMatrix[i][0] >> sudokuMatrix[i][1] >> sudokuMatrix[i][2] >> sudokuMatrix[i][3] >> sudokuMatrix[i][4] >> sudokuMatrix[i][5] >> sudokuMatrix[i][6] >> sudokuMatrix[i][7] >> sudokuMatrix[i][8])
    {
        i++;
    }
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << sudokuMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
