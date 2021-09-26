#include "tasks.h"


double BiggestOfThree(double const& a, double const& b, double const& c) {

	if ((a > b) && (a > c)) { return a; }
	else if ((b > a) && (b > c)) { return b; }
	else { return c; }

}

void angle(long double k1, long double k2) {

	long double tg_phi = (k2 - k1) / (1 + k1 * k2);

	long double ang = arctg(tg_phi, NULL);
	long deg, min, sec;

	RadToDegreeMinSec(ang, deg, min, sec);

	std::cout << deg << " " << min << "' " << sec << "'' " << std::endl;

}

long double arctg(long double const x, long double const accuracy) {

	if ((x < -1) || (x > 1)) {

		std::cout << "x must be in [-1, 1] interval" << std::endl;
		return 0;

	}

	long double result = 0;
	size_t iterations = 0;

	do {

		size_t power = 2 * iterations + 1;

		result += pow(-1, iterations) * (pow(x, power)) / long double(power);

		iterations++;


	} while (result - accuracy != result);

	return result;

}

void RadToDegreeMinSec(long double angle, long& degree, long& minutes, long& seconds) {

	angle = abs(angle);

	angle *= 180 / PI;

	degree = static_cast<long>(angle);	

	angle = (angle - static_cast<long>(angle)) * 60;
	minutes = static_cast<long>(angle);
	
	angle = (angle - static_cast<long>(angle)) * 60;
	seconds = static_cast<long>(angle);

}