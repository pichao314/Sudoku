#ifndef BACKTRACKING_H
#define BACKTRACKING_H

#define N 9
#define UNASSIGNED 0


#include <stdio.h>
#include <iostream>
#include <chrono>
#include <mach/mach.h>



using namespace std;
using namespace std::chrono;

class Backtracking
{
public:
    Backtracking(int sudoku[N][N]);
    int** getGrid();
    bool solve();
    bool FindUnassignedLocation(int &row, int &col);
    bool isSafe(int row,int col, int num);
    bool UsedInRow(int row, int num);
    bool UsedInCol(int col, int num);
    bool UsedInBox(int boxStartRow, int boxStartCol, int num);
    void printGrid();


    int getUsedTime();
    int getUsedMemory();
private:
    int** grid;

    int timeUsed;
    int memUsed;
    high_resolution_clock::time_point start;
    high_resolution_clock::time_point stop;
    struct task_basic_info t_info;
    mach_msg_type_number_t t_info_count = TASK_BASIC_INFO_COUNT;
};

#endif // BACKTRACKING_H
