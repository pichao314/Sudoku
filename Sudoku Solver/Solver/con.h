#ifndef CON_H
#define CON_H
#include <iostream>
#include <bitset>
#include <string>
#include <utility>
#include <vector>
#include <cassert>
#include <algorithm>
using namespace std;

struct cell {
        int value;
        int num_possiblities;
		bitset<10> constraints;
        cell() : value(0), num_possiblities(9), constraints(){};
    };

bool comp(const pair<int, int>& a, const pair<int, int>& b, vector<vector<cell>> ce){
    return (ce[a.first][a.second].num_possiblities < ce[b.first][b.second].num_possiblities);
}
class con
{
public:
    con();
    void solve(char** matrix);
    double getUsedTime();
    double getUsedMemory();

private:
    double timeUsed;
    double memUsed;
    vector<vector<cell> > cells = vector<vector<cell> >(9, vector<cell>(9));
	vector<pair<int, int> > bt;
    bool set(int i, int j, int v);
    bool updateConstraints(int row, int col, int extend_value);
    bool findValueForEmpty();
    bool backtrack(int k);
};

#endif