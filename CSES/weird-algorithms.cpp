#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
typedef long long ll;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    #endif
    
    ll n;
    cin >> n;
    while (1) {
        cout << n << " ";
        if (n == 1) {
            break;
        } else if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << "\n";
}