#include <iostream>
#include <vector>

#ifndef ONLINE_JUDGE
#include "../helperLibs/debugging.h"
#endif

using namespace std;

int main() {
	map<char, int> mp;
	mp['a'] = 4;
	mp['b'] = 5;
	mp['g'] = 2;
	mp['r'] = 100;
	cout << mp << endl;
}