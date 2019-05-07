#include <vector>
#include <iostream>
#include <chrono>
#include <ctime>
#include <ratio>
#include <fstream>
#include <unistd.h>

using namespace std;

class dfs {
public:
    void solve(char** matrix);
    bool df(int x, int y);
    bool row[9][9], col[9][9], sq[3][3][9];
    double getUsedTime();
    double getUsedMemory();
    void print();
    void process_mem_usage(double& vm_usage, double& resident_set);

private:
    double timeUsed;
    double vmemUsed,rmemUsed;
    int** board;
};
