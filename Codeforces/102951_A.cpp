#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);

    int n;
    cin >> n;
    int x_coord[n];
    int y_coord[n];

    int max_dist = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x_coord[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> y_coord[i];
    }

    int max = 0;
    for (int i = 0; i < n; ++i) {
        int dist_sq = (x_coord[i] - y_coord[i]) ;
        if (dist_sq > max) {
            max = dist_sq;
        }
    }

    cout << max << "\n";
}