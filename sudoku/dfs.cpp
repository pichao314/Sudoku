#include "dfs.h"
using namespace std::chrono;

void dfs::solve(char** matrix) {
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    board = new int* [9];
        for (int i = 0; i < 9; i++){
            board[i] = new int [9];
            int tmp;
            for (int j = 0; j<9;j++){
                if(matrix[i][j] == ' ')
                    tmp = 0;
                else
                    tmp = matrix[i][j] - '0';
                board[i][j] = tmp;
            }
        }
        memset(row, 0 , sizeof row);
        memset(col, 0 , sizeof col);
        memset(sq, 0 , sizeof sq);
        for(int i = 0 ;i < 9 ; i ++)
            for(int j = 0 ;j < 9 ; j ++){
                int val = board[i][j] ;
                if( val == 0) continue;
                val -= 1;
                row[i][val] = col[j][val] = sq[i/3][j/3][val] = true;
            }
        df(0,0);
        high_resolution_clock::time_point t2 = high_resolution_clock::now();
        duration<double> time_span = duration_cast<duration<double> >(t2 - t1);
        timeUsed = time_span.count() * 10000000;
        process_mem_usage(vmemUsed, rmemUsed);
    }

bool dfs::df(int x, int y)
    {
        if (y == 9) y = 0 , x++;
        if (x == 9) return true;

        if(board[x][y] != 0) return df(x,y+1);
        for(int i = 0; i <9 ;i++){
            if(board[x][y] == 0 && !row[x][i] && ! col[y][i] && !sq[x/3][y/3][i]){
                board[x][y] = i + 1;
                row[x][i] = col[y][i] = sq[x/3][y/3][i] = true;
                if(df(x, y+1))   return true;
                board[x][y] = 0;
                row[x][i] = col[y][i] = sq[x/3][y/3][i] = false;
            }
        }
        return false;
    }

void dfs::print(){
    for (int i = 0; i < 9;i++){
        for (int j = 0; j < 9;j++){
            cout << board[i][j]<<" ";
        }
        cout << endl;
    }
    cout << "Used "<<timeUsed<<" miliseconds"<<endl;
    cout << "Used "<<getUsedMemory()<<" MB"<<endl;
}

double dfs::getUsedTime(){
    return timeUsed;
}
double dfs::getUsedMemory(){
    vmemUsed = vmemUsed / (1024*1024*1024);
    return (vmemUsed/8);
}

void dfs::process_mem_usage(double& vm_usage, double& resident_set)
{
    vm_usage     = 0.0;
    resident_set = 0.0;

    // the two fields we want
    unsigned long vsize;
    long rss;
    {
        std::string ignore;
        std::ifstream ifs("/proc/self/stat", std::ios_base::in);
        ifs >> ignore >> ignore >> ignore >> ignore >> ignore >> ignore >> ignore >> ignore >> ignore >> ignore
                >> ignore >> ignore >> ignore >> ignore >> ignore >> ignore >> ignore >> ignore >> ignore >> ignore
                >> ignore >> ignore >> vsize >> rss;
    }

    long page_size_kb = sysconf(_SC_PAGE_SIZE) / 1024; // in case x86-64 is configured to use 2MB pages
    vm_usage = vsize / 1024.0;
    resident_set = rss * page_size_kb;
}
