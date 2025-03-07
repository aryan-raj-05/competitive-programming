#include <iostream>

using namespace std;

#define dbg(v) cout << "Line (" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int x = 10;

int main() {
	dbg(x);
	x = 5000;
	dbg(x);
}