#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        for (int x : nums) {
            if (uset.find(x) == uset.end()) {
                uset.insert(x);
            } else {
                return true;
            }
        }
        return false;
    }
};