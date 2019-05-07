#include "dfs.h"
#include <string>
#include <fstream>
#include <unistd.h>

using namespace std;

int main(){
    dfs foo;
    char *a [] = {"53  7    ","6  195   "," 98    6 ","8   6   3","4  8 3  1","7   2   6"," 6    28 ","   419  5","    8  79"};

    double vm, rss;

    /*for (int i = 0;i<9;i++){
        for (int j = 0; j < 9; j++){
            if (a[i][j] == ' ')
                cout << "YES!";
            cout << a[i][j]<<endl;
        }

    }
    */
    foo.solve(a);
    foo.print();
    return 0;
}