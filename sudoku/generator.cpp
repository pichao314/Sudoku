#include "generator.h"

#include <fstream>
#include <iostream>
#include <algorithm>
#include <string>
#include <time.h>

using namespace std;

generator::generator()
{
    sudokuMatrix = new char*[9];

    for (int i = 0; i < 9; i++) {
        sudokuMatrix[i] = new char[9];
    }

    ifstream* files = new ifstream[5];
    files[0].open("/Users/xiaoxiaoren/Documents/sjsu s3 class/220/project/sudoku/file/matrix1.txt");
    files[1].open("/Users/xiaoxiaoren/Documents/sjsu s3 class/220/project/sudoku/file/matrix2.txt");
    files[2].open("/Users/xiaoxiaoren/Documents/sjsu s3 class/220/project/sudoku/file/matrix3.txt");
    files[3].open("/Users/xiaoxiaoren/Documents/sjsu s3 class/220/project/sudoku/file/matrix4.txt");
    files[4].open("/Users/xiaoxiaoren/Documents/sjsu s3 class/220/project/sudoku/file/matrix5.txt");

    srand (time(NULL));
    int index = rand() % 5;

    int i = 0;
    while (files[index] >> sudokuMatrix[i][0] >> sudokuMatrix[i][1] >> sudokuMatrix[i][2] >> sudokuMatrix[i][3] >> sudokuMatrix[i][4] >> sudokuMatrix[i][5] >> sudokuMatrix[i][6] >> sudokuMatrix[i][7] >> sudokuMatrix[i][8])
    {
        i++;
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << sudokuMatrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        files[i].close();
    }
}

char** generator::getOriginMatrix() {
    return sudokuMatrix;
}

char** generator::matrixGenerator(int blanks) {
    char** matrix = new char*[9];

    for (int i = 0; i < 9; i++) {
        matrix[i] = new char[9];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            matrix[i][j] = sudokuMatrix[i][j];
        }
    }

    int* shuffleArr = new int[81];

    for (int i = 0; i < blanks; i++) {
        shuffleArr[i] = 0;
    }
    for (int i = blanks; i < 81; i++) {
        shuffleArr[i] = 1;
    }

    random_shuffle(&shuffleArr[0], &shuffleArr[81]);

    for (int i = 0; i < 9; i++) {
        int sum = i * 9;
        for (int j = 0; j < 9; j++) {
            if (shuffleArr[sum + j] == 0) {
                matrix[i][j] = ' ';
            }
        }
    }

    return matrix;
}

char** generator::getHardModeMatrix() {
    return matrixGenerator(54);
}

char** generator::getEasyModeMatrix() {
    return matrixGenerator(36);
}
