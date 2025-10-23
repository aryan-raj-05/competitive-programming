#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;

// in hindsight maybe i could've used structs here
// man, of-by-one errors are evil

int n, m; // cows and air conditioners
int min_cost = INT_MAX;
vector<vector<int>> cows(20 + 1, vector<int>(3)); // start, stop, cooling_units_req
vector<vector<int>> acs(10 + 1, vector<int>(4)); // start, stop, strength, money

// 1. recurse/iterate over all possible ways of choosing ACs
// 2. conditions to fulfill are:
//      a. cover all cows
//      b. their cooling requirements are satisfied at minimum
// 3. if all conditions are satisfied then calculate the money 
//    needed and pick the minimum cost in comparison with the global 
//    minimum cost

// state is array of size 10, value only 0 or 1, to denote which ACs has been chosen
bool condition_check(vector<int>& state) {
    // create vector of size 100(max no of stalls)
    // fill the ranges occupied by a cow with their required cooling condition
    // iterate through state and for each (start to stop) 
    // decrease the value in that vector by ac's cooling strength
    // finally check for positive non-zero values
    vector<int> stalls(101, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = cows[i][0]; j <= cows[i][1]; j++) {
            stalls[j] += cows[i][2];
        }
    }

    for(int i = 1; i <= m; i++) {
        if (state[i] == 0) continue;
        for (int j = acs[i][0]; j <= acs[i][1]; j++) {
            stalls[j] -= acs[i][2];
        }
    }

    for(int i = 0; i < stalls.size(); i++) {
        if (stalls[i] > 0) return false;
    }
    return true;
}

int cal_cost(vector<int>& state) {
    int cost = 0;
    for (int i = 0; i < state.size(); i++) {
        if (state[i] == 1) {
            cost += acs[i][3];
        }
    }
    return cost;
}

void recurse(vector<int>& state, int pos) {
    if (pos == m + 1) {
        if (condition_check(state)) {
            min_cost = min(min_cost, cal_cost(state));
        }
        return;
    }

    state[pos] = 1;
    recurse(state, pos + 1);

    state[pos] = 0;
    recurse(state, pos + 1);
}

int main() {
    cin >> n >> m;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < 3; j++) { cin >> cows[i][j]; }
    }

    for(int i = 1; i <= m; i++) {
        for (int j = 0; j < 4; j++) { cin >> acs[i][j]; }
    }

    vector<int> state(m + 1, 0);
    recurse(state, 1);

    cout << min_cost << "\n";
    return 0;
}