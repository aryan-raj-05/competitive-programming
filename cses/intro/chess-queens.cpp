#include <bits/stdc++.h>
using namespace std;
#define rep(i, a) for(int i = 0; i < (a); i++)

// state = [1, 2, 1] => [first col, first row][second col, second row][third col, first row]
vector<vector<char>> board(8, vector<char>(8));
int sol_count = 0;

bool check_attack(vector<int>& state, int r, int c) {
    if (board[r][c] == '*') return false;
    rep(i, c) {
        if(state[i] == r) return false;
        if(abs(i - c) == abs(state[i] - r)) return false;
    }
    return true;
}

void recurse(vector<int>& state, int col) {
    if (col == 8) {
        sol_count++;
        return;
    }

    for (int r = 0; r < 8; r++) {
        if (check_attack(state, r, col)) {
            state[col] = r;                  
            recurse(state, col + 1);
            state[col] = -1;                 
        }
    }
}

int main() {
    rep(i, 8) rep(j, 8) cin >> board[i][j];
    
    vector<int> state(8);
    recurse(state, 0);
    cout << sol_count << "\n";

    return 0;
}