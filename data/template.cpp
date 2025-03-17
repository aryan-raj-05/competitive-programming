#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#ifndef ONLINE_JUDGE

#include "../data/debugging.h"
#define print(x) cout << #x << " = " << x << '\n'
#define CLOCK auto start = high_resolution_clock::now();
#define STOP  auto end = high_resolution_clock::now(); \
    		  cerr << "\nExecution Time: " \
    			   << duration_cast<microseconds>(end-start).count() \
    		 	   << " microseconds\n";

#else

#define dbg(x)
#define cdbg(x)
#define CLOCK
#define STOP

#endif

using ll = long long;
using pii = pair<int,int>;
using str = string;
using vi = vector<int>;

#define all(x)          x.begin(), x.end()
#define iter(a, x)      for (auto& a : x)
#define len(x)          (int) (x).size()
#define range(i, a, b)  for (int i = a; i < (b); ++i)
#define rep(i, n)       for (int i = 0; i < (n); ++i)

#define mp make_pair
#define pb push_back
#define ff first
#define ss second

void setIO(string name = "") {
	cin.tie(0)->sync_with_stdio(0); 
	if (!name.empty()) {
		freopen((name + ".in").c_str(), "r", stdin); 
		freopen((name + ".out").c_str(), "w", stdout);
	}
}

int main() {

}