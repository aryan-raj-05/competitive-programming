#include <bits/stdc++.h> 
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;

#define all(x) x.begin(), x.end()
#define FOR(i, a, b) for(int i = a; i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define sz(x) (int) (x).size()
#define each(a, x) for(auto& a : x)

#define pb push_back
#define f first
#define s second
#define mp make_pair

void setIO(string name = "") {
    cin.tie(0)->sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

int main() {
    setIO();
    
}