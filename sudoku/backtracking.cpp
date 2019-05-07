#include "backtracking.h"

Backtracking::Backtracking(int sudoku[N][N]){
    this->grid = new int*[N];
    for (int i = 0; i < N; i++) {
        this->grid[i] = new int[N];
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            this->grid[i][j] = sudoku[i][j];
        }
    }
    start = high_resolution_clock::now();
}

int** Backtracking::getGrid(){
    return this->grid;
}

bool Backtracking::solve(){
    int row, col;

    // If there is no unassigned location,
    // we are done
    if (!FindUnassignedLocation(row, col))
    {
        stop = high_resolution_clock::now();
        return true; // success!
    }
    // consider digits 1 to 9
    for (int num = 1; num <= 9; num++)
    {
        // if looks promising
        if (isSafe(row, col, num))
        {
            // make tentative assignment
            grid[row][col] = num;

            // return, if success, yay!
            if (solve()){
                return true;
            }

            // failure, unmake & try again
            grid[row][col] = UNASSIGNED;
        }
    }
    return false; // this triggers backtracking
}

bool Backtracking::FindUnassignedLocation(int &row, int &col){
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (grid[row][col] == UNASSIGNED)
                return true;
    return false;
}

bool Backtracking::isSafe(int row, int col, int num){
    return !UsedInRow(row, num) &&
    !UsedInCol(col, num) &&
    !UsedInBox(row - row % 3 ,col - col % 3, num) && grid[row][col] == UNASSIGNED;
}

bool Backtracking::UsedInBox(int boxStartRow, int boxStartCol, int num){
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (grid[row + boxStartRow]
                [col + boxStartCol] == num)
                return true;
    return false;
}

bool Backtracking::UsedInCol(int col, int num){
    for (int row = 0; row < N; row++)
        if (grid[row][col] == num)
            return true;
    return false;
}

bool Backtracking::UsedInRow(int row, int num){
    for (int col = 0; col < N; col++)
        if (grid[row][col] == num)
            return true;
    return false;
}

void Backtracking::printGrid(){
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
            cout << grid[row][col] << " ";
        cout << endl;
    }
}

int Backtracking::getUsedTime(){
    auto duration = duration_cast<microseconds> (stop - start);
    cout << "Time taken by function: "<< duration.count() << " microseconds" << endl;
    this-> timeUsed = duration.count();
    return this->timeUsed;
}

int Backtracking::getUsedMemory(){
    task_info(mach_task_self(),
              TASK_BASIC_INFO, (task_info_t)&t_info, &t_info_count);
    this-> memUsed = t_info.resident_size/1048576;
    cout << "Virtual Memory taken by function: "<< memUsed << " MB" << endl;
    return this->memUsed;
}
