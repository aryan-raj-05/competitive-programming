#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> alphabet;
        for (char letter : s) alphabet[letter]++;
        for (char letter : t) alphabet[letter]--;
        for (auto& [key, val] : alphabet)
            if (val != 0) return false;
        return true;
    }
};