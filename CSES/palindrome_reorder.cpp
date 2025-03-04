#include <bits/stdc++.h>

using namespace std;

void solve(string s) {
    int len = s.size();
    int map[26];
    for (auto ch : s) {
        map[ch - 'A']++;
    }

    int cnt = 0;
    for (auto val : map) {
        if (val % 2 != 0)   
            ++cnt;
    }

    if (cnt > 1) {
        cout << "NO SOLUTION\n";
        return;
    }

    string s(len, ' ');
    
}

int main() {
    string s;
    getline(cin, s);
    solve(s);
}