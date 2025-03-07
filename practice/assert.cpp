#define NDEBUG
#include <cassert>
#include <cmath>
#include <iostream>

double calTimeUntilObjHitsGrount(double initialHeight, double gravity) {
	assert(gravity > 0.0 && "gravity can't be less than zero");
	if (initialHeight <= 0) {
		return 0;
	}
	return std::sqrt((2.0 * initialHeight) / gravity);
}

int main() {
	std::cout << "Took time: " << calTimeUntilObjHitsGrount(100, -9.8) << "s\n";
	return 0;
}