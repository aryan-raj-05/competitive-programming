#include <iostream>

using namespace std;

int x = 10;

inline void dbg() { cerr << "x is " << x << endl; }

int main() {
	dbg();
	x = 5000;
	dbg();
}